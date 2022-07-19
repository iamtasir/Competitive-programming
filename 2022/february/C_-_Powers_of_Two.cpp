#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal(ll n)
{
    return (n * (n - 1)) / 2;
}
int main()
{

    ll n;
    cin >> n;
    map<ll, ll> mp;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        mp[temp]++;
        st.insert(temp);
    }
    ll ans = 0;
    for (auto l : mp)
    {
        ll value = l.first;
        for (ll j = 30; j >= 0; j--)
        {
            ll tempvalue = (1 << j);
            if (tempvalue == value)
            {
                ans += cal(mp[value]);
            }
            else if (tempvalue > value && tempvalue - value > value)
            {
                if (st.count(tempvalue - value) && (tempvalue - value) != value)
                {
                    ans += (mp[value] * mp[tempvalue - value]);
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it