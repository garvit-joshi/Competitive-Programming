/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}

void solve() {
    vector <int> v1;
    vpb(v1,5);
    vector<int>::iterator it;

    cout << "vector v1 elements are: ";
    vshow(v1,it);
    cout<<"\n";
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}
