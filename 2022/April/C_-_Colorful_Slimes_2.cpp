#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin >> n;
    ll ar[n+1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= n;)
    {
        ll temp = ar[i];
        ll c = 0;
        while (temp == ar[i] && i <= n)
        {
            c++;
            i++;
        }
        if (c == 0)
            i++;
        ans += (c / 2);
    }
    cout << ans << "\n";
    return 0;
}