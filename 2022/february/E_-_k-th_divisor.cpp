#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> divisorlist;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisorlist.push_back(i);
            if (i * i != n)
                divisorlist.push_back(n / i);
        }
    }
    sort(divisorlist.begin(), divisorlist.end());
    ll length = divisorlist.size();
    if (length >= k)
        cout << divisorlist[k - 1] << "\n";
    else
        cout << -1 << "\n";

    return 0;
}
