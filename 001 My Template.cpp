/*
Created by-Garvit Joshi
garvitjoshi9@gmal.com
https://github.com/garvit-joshi
g++ -std=c++11 -O2 -Wall test.cpp -o test
*/

#include <bits/stdc++.h>

using namespace std;

#define int long long int
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define EPSILON 1e-9
// EPSILON=10^(-9), Use:if(abs(a-b) < 1e-9)   //a and b equal

void debug()
{
    cout << "\n";
}

template <typename First, typename... Strings>
void debug(First arg, const Strings &...rest)
{
    cout << arg << " ";
    debug(rest...);
}

int solve()
{

    return 0;
}

int32_t main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   //Input from a file
    freopen("output.txt", "w", stdout); //Output to a file
#endif

    int tc;
    cin >> tc;
    while (abs(tc--))
    {
        solve();
    }
    return 0;
}
