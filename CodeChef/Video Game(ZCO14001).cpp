#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x,var,pb=0;
	vector<int>v1;
	vector<int>v2;
	cin>>n>>h;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v1.push_back(x);
	}
	for(int i=0;;i++)
	{
		cin>>x;
		v2.push_back(x);
		if(v2[i]==0)
		{
			break;
		}
	}
	var=0;
	for (int i=0;i<v2.size();i++)
	{
		if(v2[i]==1)
		{
			if(var!=0)
			{
				var=var-1;
			}
		}
		else if(v2[i]==2)
		{
			if(var!=(v1.size()-1))
			{
				var=var+1;
			}
		}
		else if(v2[i]==3)
		{
			if(pb!=1 && v1[var]!=0)
			{
				pb=1;
				v1[var]-=1;
			}
		}
		else if(v2[i]==4)
		{
			if(pb!=0 && v1[var]!=h)
			{
				pb=0;
				v1[var]+=1;
			}
		}
		else if(v2[i]==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<v1[i]<<" ";
	}
	
	return 0;
}
