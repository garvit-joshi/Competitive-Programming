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

    ll n,k,score=0;
    vector <ll> v;
    cin>>n>>k;
    if(n<=0 && v[k]==0)
    {
        cout<<0;
    }
    vpb(v,n);
    for(int i=0;i<n;i++)
    {
        if(v[i]==0){
            break;
        }
        if(v[i]>=v[k-1]) {
            score++;
        }
    }
    cout<<score;
    return 0;
}
