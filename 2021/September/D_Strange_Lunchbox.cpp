#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

#define pb push_back
#define fi first
#define se second

int az = 200007, bz = 2000007;
ll mod1 = 1000000007, mod2 = 998244353;
ll mn = LLONG_MAX;
ll mx = LLONG_MIN;
ll mod;

ll ara[500], tra[500], dp[303][303][303];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x, y, a, b, c, idx, f, s, e, z, i, j;

    cin >> n >> x >> y;
    for (i = 1; i <= n; i++)
    {
        cin >> a >> b;
        ara[i] = a;
        tra[i] = b;
    }

    for (idx = n + 1; idx >= 1; idx--)
    {
        for (f = 0; f <= x; f++)
        {
            for (s = 0; s <= y; s++)
            {
                if (idx == n + 1)
                {
                    if (f > 0 || s > 0)
                    {
                        dp[idx][f][s] = n + 100;
                        cout << "dp[" << idx << "][" << f << "][" << s << "] =" << dp[idx][f][s] << endl;
                    }
                }
                else
                {
                    dp[idx][f][s] = dp[idx + 1][f][s];
                    //  cout << "dp[" << idx << "][" << f << "][" << s << "] =" << dp[idx][f][s] << endl;

                    e = max(0LL, f - ara[idx]);
                    z = max(0LL, s - tra[idx]);
                    // cout << i << " " << e << " " << z << endl;
                    //  cout << "dp[" << idx << "][" << f << "][" << s << "] =" << dp[idx][f][s] << endl;
                    //   cout << "dp[" << idx << "][" << e << "][" << z << "] =" << dp[idx][e][z] << endl;

                    dp[idx][f][s] = min(dp[idx][f][s], 1 + dp[idx + 1][e][z]);
                    cout << "dp[" << idx << "][" << f << "][" << s << "] =" << dp[idx][f][s] << endl;
                }
            }
        }
    }

    if (dp[1][x][y] > n)
        printf("-1\n");
    else
    {
        cout << dp[1][x][y] << endl;
    }

    return 0;
}
