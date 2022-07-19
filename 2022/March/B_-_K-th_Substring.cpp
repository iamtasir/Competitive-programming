#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string, ll> mp;
void printSubstrings(string str)
{

    ll n = str.size();
    for (int i = 0; i < n; i++)
    {
        string subStr;

        for (int j = i; j < n; j++)
        {
            subStr += str[j];
            ll size1 = subStr.size();
            if (size1 <= 5)
                mp[subStr]++;
        }
    }
}
int main()
{
    ll t, k;
    string s;
    cin >> s >> k;
    printSubstrings(s);
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        k--;
        if (k == 0)
        {
            cout << it->first << "\n";
            break;
        }
    }

    return 0;
}
