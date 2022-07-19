#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll ans = 0;
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        ans += (s[i] - '0');
    }
    ll ans1 = 0;
    ans1 += ((n - 1) * 9);
    ans1 += (s[0] - '0' - 1);
    cout << max(ans, ans1);

    return 0;
}
