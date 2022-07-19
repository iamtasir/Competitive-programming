#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    string s;
    cin >> s;

    int sz = s.size();
    map<char, vector<int>> mp;
    map<char, int> mp1;

    for (int i = 0; i < sz; i++)
    {
        char temp = s[i];
        mp[s[i]].push_back(i);
        mp1[s[i]]++;
    }

    for (auto l : mp)
    {
        cout << l.first << " ";
        auto v = l.second;
        for (auto l1 : v)
            cout << l1 << " ";
        cout << "\n";
        cout << mp1[l.first] << "\n";
    }
}