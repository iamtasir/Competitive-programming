#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // O_O ;
    ll n, k;
    cin >> n >> k;
    if (n == k)
        cout << -1 << "\n";
    else
    {
        cout << n - k << " ";
        for (ll i = 1; i < n - k; i++)
            cout << i << " ";
        for (ll i = n - k + 1; i <= n; i++)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
