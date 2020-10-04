#include <iostream>
using namespace std;
int medl()
{
    int arr[120],n,min,max,mn,mx;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];max=arr[0];
    for(int i=0;i<n;i++)
    {
       	if(arr[i]<=min)
	   	{
	   		min=arr[i];
	   		mn=i;
		}
		if(arr[i]>=max)
		{
			max=arr[i];
			mx=i;
		}
    }
    for(int i=0;i<n;i++)
    {
    	if(i==mn || i==mx)
    	{
    		continue;
		}
		else
		{
			arr[i]=-1;
		}
	}
	for (int i=0;i<n;i++)
	{
		if(arr[i]==-1)
		{
			continue;
		}
		else
		{
			cout<<arr[i]<<endl;
		}
	}
    return 0;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    medl();
	}
	return 0;
}
