/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
g++ -std=c++11 -O2 -Wall test.cpp -o test
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

double solve() {
    double w,a;
    cin>>w>>a;
    if(w+0.5>a)
        return a;
    else if((int)w%5!=0)
        return a;
    return a-w-0.50;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    freopen("input.txt", "r", stdin);   //Input from a file
    freopen("output.txt", "w", stdout);   //Output to a file
    */


    printf("%.2f\n", solve());
    return 0;
}

//Link: https://www.codechef.com/problems/HS08TEST
