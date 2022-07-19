#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{
    ll n;
    cin >> n;
    ll val = n;
    ll index = n + 1;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    for (ll i = n; i >= 1; i--)
    {
        if (index > i)
        {
            ans++;
        }
        index = min(i - ar[i], index);

        if (index <= 1)
        {
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
