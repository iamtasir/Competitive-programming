#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto l : s)
        mp[l]++;
    ll ans = 0;
    for (auto l : mp)
    {
        ll x = l.second;

        ll temp = (ans * x) % mod;
        ans += temp;
        ans %= mod;
        ans += x;
        ans %= mod;
    }
    cout << ans << "\n";

    return 0;
}
