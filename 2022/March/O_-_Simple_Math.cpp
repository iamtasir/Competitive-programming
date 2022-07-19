#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 998244353
ll cal(ll x)
{
    return (x * (x + 1)) / 2;
}
int main()
{
    // O_O ;
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans1 = cal(a), ans2 = cal(b), ans3 = cal(c);
    ans1 %= mod;
    ans2 %= mod;
    ans3 %= mod;
    ans1 *= ans2;
    ans1 %= mod;
    ans1 *= ans3;
    ans1 %= mod;
    cout << ans1 << "\n";

    return 0;
}