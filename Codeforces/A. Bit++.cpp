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

    int n,x=0;
    string st;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>st;
        if(st[0]=='+' || st[2]=='+')
            x++;
        else
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}
