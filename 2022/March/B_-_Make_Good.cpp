#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll sum = 0;
        ll xr = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
            xr ^= ar[i];
            sum += ar[i];
        }

        cout << 2 << "\n";
        cout << xr << " " << xr + sum << "\n";
    }

    return 0;
}
