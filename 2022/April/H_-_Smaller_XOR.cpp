#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, l, r;
    cin >> n >> l >> r;
    ll ans = 0;
    for (ll i = 0; i <= 62; i++)
    {
        if (n & (1ll << (i)))
        {
            ll r1 = min((1ll << (i + 1)) - 1, r);
            ll l1 = max((1ll << i), l);
            ans += max(0ll, r1 - l1 + 1);
        }
    }
   cout << ans << "\n";

    return 0;
}
