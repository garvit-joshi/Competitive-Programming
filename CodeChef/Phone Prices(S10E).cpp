#include<bits/stdc++.h>
using namespace std;
int price()
{
	int n,p[1000],count=1;
	cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<n;i++)
    {
        int price = p[i];
        if(i==1)
        {
            if(price<p[i-1])
            count++;
        }
        else if(i==2)
        {
            if(price<p[i-1] && price<p[i-2])
            count++;
        }
        else if(i==3)
        {
            if(price<p[i-1] && price<p[i-2] && price<p[i-3])
                count++;
        }
        else if(i==4)
        {
            if(price<p[i-1] && price<p[i-2] && price<p[i-3] && price<p[i-4])
                    count++;
        }
        else
        {
            if(price<p[i-1] && price<p[i-2] && price<p[i-3] && price<p[i-4] && price<p[i-5])
                count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		price();
	}
	return 0;
}
