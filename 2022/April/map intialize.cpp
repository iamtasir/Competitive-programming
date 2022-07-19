#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int> mp;
    // string s = "Rahim";
    mp["ab"] = 100;
    mp["z"] = 34454;
    mp["abc"] = 102202;
    mp["bc"] = 99;
    mp["ac"] = 200;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        cout << it->first << " " << it->second << "\n";
    }

    for (auto l : mp)
    {
        cout << l.first << " " << l.second << "\n";
    }
}