#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    vector<ll> v;
    set<ll> st;
    ll a = 1;
    for (ll i = 0; i <= 63; i++)
    {
        ll b = 1;
        for (ll j = 0; j <= 63; j++)
        {
            if ((a + b) >= l && (a + b) <= r)
                st.insert(a + b);
            if (a >= (1e18 - b + 1))
                continue;
            if (b >= ((1e18 + y) / y))
                continue;
            b *= y;
        }
        if (a >= ((1e18 + x) / x))
            continue;
        a *= x;
    }
    ll ans1 = r - l + 1;
    ll ans2 = 0;
    if (st.count(l) == 0)
        st.insert(l - 1);
    if (st.count(r) == 0)
        st.insert(r + 1);
    for (auto xt : st)
    {
        v.push_back(xt);
    }
    ll size1 = v.size();
    for (ll i = 1; i < size1; i++)
    {
        ans2 = max(ans2, v[i] - v[i - 1] - 1);
    }
    cout << min(ans2, ans1) << "\n";
    return 0;
}