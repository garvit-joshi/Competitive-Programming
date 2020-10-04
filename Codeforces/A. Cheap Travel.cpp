/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,m,n,r,c;
    cin>>n>>m>>a>>b;
    if(m * a <= b)
    {
        cout<<a*n;
    }
    else
    {
        cout << (n/m) * b + min((n%m) * a, b);
    }
    return 0;
}
