/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define vshow(v,it) for (it = v1.begin(); it != v1.end(); it++)cout << *it << " ";

void solve() {
    string word;
    cin>>word;
    if(word.length()<=10)
    {
        cout<<word<<"\n";
    }
    else
    {
        cout<<word[0]<<word.length()-2<<word[word.length()-1]<<"\n";
    }
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
