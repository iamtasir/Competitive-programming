#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
#define mod 1000000007
int main()
{
    ll n;
    cin >> n;
    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
            odd++;
        else
            even++;
    }
    if (even > 0 && (odd & 1))
        cout << "NO"
             << "\n";
    else
        cout << "YES"
             << "\n";

    return 0;
}
