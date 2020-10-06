#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int q, type; cin >> q; 
    map<string,int> clas; string name;
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2)
            clas.erase(name);
        else
            cout << clas[name] << "\n";
    }
    return 0;
}
