
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // O_O ;
    ll n;
    cin >> n;
    ll ans = 0;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    reverse(v.begin(), v.end());
    for (auto l : v)
    {

        ll a, b;
        a = l.first;
        b = l.second;
        a += ans;

        ll res = a % b;
        if (res != 0)
            ans += (b - res);
    }
    cout << ans << "\n";

    return 0;
}
