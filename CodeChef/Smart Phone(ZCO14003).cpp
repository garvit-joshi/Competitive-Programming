#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x,max;
	vector<long long>v1;
	vector<long long>v2;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>x;
		v1.push_back(x);
	}
	sort(v1.begin(), v1.end());
	x=0;
	for (long long i=n-1;i>=0;i--)
	{
		x=v1[i];
		max=0;
		for (long long j=i;j<n;j++)
		{
			max+=x;
		}
		v2.push_back(max);
	}
	max=v2[0];
	for (long long i=0;i<v2.size();i++)
	{
		if(v2[i]>=max)
		{
			max=v2[i];
		}
	}
	cout<<max;
}
