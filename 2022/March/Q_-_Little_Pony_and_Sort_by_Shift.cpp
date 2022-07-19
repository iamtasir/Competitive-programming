
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin >> n;
    ll ar[n + 10];
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    ll cnt = 0;
    ll index;
    for (ll i = 2; i <= n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            cnt++;

            index = i;
        }
    }
    if (cnt > 1)
        cout << -1 << "\n";
    else if (cnt == 0)
        cout << 0 << "\n";
    else
    {
        if (ar[n] > ar[1])
            cout << -1 << "\n";
        else
            cout << n - (index - 1) << "\n";
    }
    return 0;
}