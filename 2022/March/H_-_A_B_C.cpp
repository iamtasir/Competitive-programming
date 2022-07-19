#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll c = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; i * j <= n; j++)
        {
            if ((n / (i * j)) > 0)
                c += (n / (i * j));
        }
    }
    cout << c << "\n";
    return 0;
}