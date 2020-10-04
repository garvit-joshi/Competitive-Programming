/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>
#include <stdio.h> 
#include <string.h> 

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define vshow(v,it) for (it = v1.begin(); it != v1.end(); it++)cout << *it << " ";


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a.compare(b)<0)
    {
        cout<<-1;
    }
    else if(a.compare(b)>0)
    {
        cout<<1;
    }
    else 
    {
        cout<<0;
    }
    return 0;
}
