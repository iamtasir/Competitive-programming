#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    ll ans = 0;
    for (ll i = 42; i >= 0; i--)
    {
        ll temp2 = 0;
        for (ll j = 1; j <= n; j++)
        {
            if (ar[j] & (1ll << i) && (k >= (1ll << i)))
                temp2++;
        }
        if (temp2 < (n + 1) / 2 && (k >= (1ll << i)))
            ans += (1ll << i), k -= (1ll << i);
    }
    ll ans2 = 0;
    for (ll i = 1; i <= n; i++)
        ans2 += (ar[i] ^ ans);
    cout << ans2 << "\n";
    return 0;
}