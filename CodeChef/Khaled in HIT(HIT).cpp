#include<bits/stdc++.h>
using namespace std;
int khalid()
{
	int n,g,k,x,y,z,a,b,c;
	vector <int> v1;
	vector <int> v2;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>g;
		v1.push_back(g);
	}
	k=n/4;
	sort(v1.begin(), v1.end());
	for(int i=0;i<4;i++)
	{
		for(int j=n-1;j>=n-k;j--)
		{
			v2.push_back(v1[j]);
			v1.pop_back();
		}
		if(i==0)
		{
			z=v2[k-1];
		}
		else if(i==1)
		{
			y=v2[k-1];
			a=v2[0];
		}
		else if(i==2)
		{
			x=v2[k-1];
			b=v2[0];
		}
		else if(i==3)
		{
			c=v2[0];
		}
		n=n-k;
		v2.clear();
	}
	if(z==a || y==b || x==c)
	{
		cout<<-1<<endl;
	}
	else
	{
	  cout<<x<<" "<<y<<" "<<z<<endl;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		khalid();
	}
	return 0;
}

