#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int main()
{

    ll n;
    cin >> n;
    ll ans = 0, sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i], sum += ar[i];
        sum %= mod;
    }

    for (ll i = 1; i <= n; i++)
    {
        sum -= ar[i];
        if (sum < 0)
            sum += mod;
        ans += (sum * ar[i]);
        ans %= mod;
    }
    cout << ans << "\n";
    return 0;
}