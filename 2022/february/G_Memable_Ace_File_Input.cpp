#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
    freopen("max-pair.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        ll ans = 0;
        ll n = s.size();
        if (s[0] != s[n - 1])
            cout << n - 1 << "\n";
        else
            cout << n - 2 << "\n";
    }
}
