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

    vector <vector <int>> arr;
    int l=0,b=0,ele,moves=0;
    for(int i=0;i<5;i++) {
        vector <int> v;
        for(int j=0;j<5;j++)
        {
            cin>>ele;
            v.push_back(ele);
            if(ele==1) {
                l=i;
                b=j;
            }
        }
        arr.push_back(v);
    }
    if(l==0 || l==4)
        moves+=2;
    if(l==1 || l==3)  
        moves+=1;
    if(b==0 || b==4)
        moves+=2;
    if(b==1 || b==3)  
        moves+=1;

    cout<<moves;
    return 0;
}
