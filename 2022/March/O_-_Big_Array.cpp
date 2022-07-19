#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        mp[x] += y;
    }
    ll c = 0;
    for (auto l : mp)
    {
        c += l.second;
        if (c >= k)
        {
            cout << l.first << "\n";
            break;
        }
    }
    return 0;
}
