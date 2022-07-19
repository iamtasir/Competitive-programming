#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[505][505];
int main()
{
    ll q, n;
    cin >> q >> n;
    map<ll, set<ll>> mp;
    ll specialvalue = -1, index = -1;
    ll c = 0;
    for (ll i = 1; i <= q; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            mp[i].insert(ar[i][j]);
        }
        ll l = mp[i].size();
        if (l > 1)
            c = 1;
    }
    ll xr = ar[1][1];
    for (ll i = 2; i <= q; i++)
    {
        ll val = ar[i][1];
        xr ^= val;
    }
    if (xr)
    {
        cout << "TAK"
             << "\n";
        for (ll i = 1; i <= q; i++)
            cout << 1 << " ";
        cout << "\n";
    }
    else
    {
        if (!c)
            cout << "NIE"
                 << "\n";
        else
        {
            ll x = 0;
            cout << "TAK"
                 << "\n";
            for (ll i = 1; i <= q; i++)
            {
                for (ll j = 2; j <= n; j++)
                {
                    if (ar[i][j] != ar[i][1])
                    {
                        index = j;
                        specialvalue = i;
                        x = 1;
                        break;
                    }
                    if (x)
                    {
                        break;
                    }
                }
            }
            for (ll i = 1; i <= q; i++)
            {
                if (i == specialvalue)
                    cout << index << " ";
                else
                    cout << 1 << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}