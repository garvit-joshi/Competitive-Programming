#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int q,x,y;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        cin>>x;
        if(y==1)
        {
            s.insert(x);
        }
        if(y==2)
        {
            s.erase(x);
        }
        if(y==3)
        {
            set<int>::iterator it=s.find(x);
            if(it==s.end())
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
