
#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef long double dl;

#define mod 1000000007
const ll MAX = 1e7 + 10;
// map<ll, vector<ll>> ar;
// map<ll, ll> mp;
int ar[MAX][27];
ll br[MAX], ans[MAX];
int main()
{
    ll n, q;
    cin >> n >> q;
    //  debug(n);
    ll totalnodes = 1;
    string s1 = "abc";
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll cur = 1;
        string s;
        cin >> s;
        ll sz = s.size();
        mx = max(sz, mx);
        for (ll j = 0; j < sz; j++)
        {

            ll c = s[j] - 'a';
            ll x = 0;

            if (!ar[cur][c])
                ar[cur][c] = ++totalnodes;
            cur = ar[cur][c];
            br[cur]++;
            ans[j + 1] = max(ans[j + 1], br[cur]);
        }
    }
    while (q--)
    {
        ll index;
        cin >> index;
        if (index > mx)
            cout << 0 << "\n";
        else
            cout << ans[index] << "\n";
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it