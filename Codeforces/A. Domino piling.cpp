/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define vshow(v,it) for (it = v1.begin(); it != v1.end(); it++)cout << *it << " ";

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l,b,a;
    cin>>l>>b;
    a=l*b;
    cout<<a/2;
    return 0;
}
