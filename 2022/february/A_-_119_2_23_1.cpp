#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (ll i = 0; i < 63; i++)
    {
        ll val = pow(2, i);
        if (val > n)
        {
            break;
        }
        else
        {
            ll temp = n / val;
            ll temp2 = n - (temp * val);
            ans = min(ans, temp + i + temp2);
        }
    }
    cout << ans << "\n";

    return 0;
}
