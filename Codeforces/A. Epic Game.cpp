/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define vshow(v,it) for (it = v1.begin(); it != v1.end(); it++)cout << *it << " ";


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,n,r;
    cin>>a>>b>>n;
    while(true) {
        r=__gcd(a,n);
        n-=r;
        if(n==0)
        {
            cout<<0;
            break;
        }
        r=__gcd(b,n);
        n-=r;
        if(n==0) {
            cout<<1;
            break;
        }
    }
    return 0;
}
