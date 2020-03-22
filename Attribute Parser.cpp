#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 
unsigned countWords(string str)  
{  
    int count=0;
    for (int i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }  
    return count+1;
}
int WordPhraser(string str,vector <string> &tags,vector <string> &attribute,vector <string> & syntax,vector <string>&values) 
{
    int i=0,flag=0,count=1;
    vector <string> words;
    string word = "";
    if(countWords(str)==1)
    {
        tags.push_back(str);
        return 0;
    } 
    string tags1="";
    for (char x : str) 
    {
        if(x=='"'&& count%2==1)
        {
            count++;
            word="";
            continue;
        }
        if (count%2==0)
        {
            if(x=='"')
            {
                count++;
                for(int l=0;l<tags.size();l++)
                {
                    if(l==0)
                    {
                        tags1=tags[l];
                    }
                    else
                    {
                        tags1=tags1+".";
                        tags1=tags1+tags[l];
                    }
                }
                tags1=tags1+"~"+attribute.back();
                syntax.push_back(tags1);
                values.push_back(word);
                continue;
            }
            word=word+x;
        }
        else if (x == ' ') 
        {
            if(i==0)
            {
                tags.push_back(word);     //all tags name is serial order
            }
            if(flag==1)
            {
                flag=0;
            }
            if(word=="=")
            {
                attribute.push_back(words.back());   //attributes name
                flag=1;
            }
            words.push_back(word);
            word = ""; 
            i++;
        } 
        else
        { 
            word = word + x; 
        } 
    }
    return 0;
}
int main() {
    int n,q;
    string s;
    vector <string> source;
    vector <string> attributes;
    vector <string> tags;
    vector <string> syntax;
    vector <string> values;
    cin>>n>>q;
    for(int i=0;i<=n;i++)
    {
        getline(cin,s);
        if(i==0)
        {
            continue;
        }
        s.erase(s.begin(),s.begin()+1);
        s.erase(s.end()-1,s.end());
        source.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        if(source[i][0]!='/')
        {
            WordPhraser(source[i],tags,attributes,syntax,values);
        }
        else
        {
            tags.pop_back();
        } 
    }
    for(int i=0;i<q;i++)
    {
        getline(cin,s);
        int flag=0;
        for(int j=0;j<syntax.size();j++)
        {
            if(s==syntax[j])
            {
                cout<<values[j]<<endl;
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Not Found!"<<endl;
        }
    }
    return 0;
}
