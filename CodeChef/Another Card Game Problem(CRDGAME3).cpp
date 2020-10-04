#include <bits/stdc++.h>
using namespace std;
int countDigit(long long int n) 
{ 
    return floor(log10(n) + 1);
}
int Game()
{   
    long long int R,C,pC=0,pR=0;
    cin>>C>>R;
    if(countDigit(C)==countDigit(R)&&countDigit(C)==1)
    {
        cout<<"1 1"<<endl;
        return 0;
    }
    pC=C%9;
    C=C/9;
    pR=R%9;
    R=R/9;
    if(pC!=0)
    {
        C++;
    }
    if(pR!=0)
    {
        R++;
    }
    if(C==R)
    {
        cout<<1<<" "<<C<<endl;
    }
    else if(C>R)
    {
        cout<<1<<" "<<R<<endl;
    }
    else
    {
        cout<<0<<" "<<C<<endl;
    }
    return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    Game();
	}
	return 0;
}
//link: https://www.codechef.com/AUG20B/problems/CRDGAME3
