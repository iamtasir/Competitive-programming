#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll ar[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n, greater<ll>());
        for (ll i = 0; i < n; i++)
            cout << ar[i] << " ";
        cout << "\n";
    }

    return 0;
}
