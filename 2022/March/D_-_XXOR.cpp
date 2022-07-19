#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int main()
{
    // O_O ;
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    ll ans = 0;
    for (ll i = 0; (1ll << i) <= k; i++)
    {
        ll temp2 = 0;
        for (ll j = 1; j <= n; j++)
        {
            ll temp = (ar[j] & (1ll << i));
            //  debug(temp);
            if (ar[j] & (1ll << i) && (k & (1ll < i)))
                temp2++;
        }
        if (temp2 < (n + 1) / 2)
            ans += (1ll << i);
        // cout << temp2 << nn;
        // debug(ans);
    }
    ll ans2 = 0;
    for (ll i = 1; i <= n; i++)
        ans2 += (ar[i] ^ ans);
    cout << ans2 << "\n";
    return 0;
}
