/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
*/

#include <iostream>

using namespace std;
/*
#define ll long long
#define vpb(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define vshow(v,it) for (it = v1.begin(); it != v1.end(); it++)cout << *it << " ";
*/

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    int sol[3],counter=0,count1=0;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        counter=0;
        cin>>sol[0]>>sol[1]>>sol[2];
        for(int i=0;i<3;i++) {
            if(sol[i]==1){
                counter++;
            }
        }
        if(counter>=2)
        {
            count1++;
        }
    }
    cout<<count1;
    return 0;
}
