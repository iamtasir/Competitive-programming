#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s, s1;
    cin >> s >> s1;
    map<char, ll> freq1, freq2;
    for (auto l : s)
        freq1[l]++;
    for (auto l : s1)
        freq2[l]++;
    ll size1 = freq1.size(), size2 = freq2.size();
    if (size1 == size2)
    {
        ll c = 0;
        map<char, set<char>> st;
        for (ll i = 0; i < size1; i++)
        {
            st[s[i]].insert(s1[i]);
            ll size4 = st[s[i]].size();
            if (size4 != 1 || freq1[s[i]] != freq2[s1[i]])
            {
                c = 1;
                break;
            }
        }
        if (c)
            cout << "No"
                 << "\n";
        else
            cout << "Yes"
                 << "\n";
    }
    else
        cout << "No"
             << "\n";

    return 0;
}