#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 505
ll dp[MAX][MAX];

int main()
{
    ll mx = 1e18;
    for (ll i = 1; i < MAX - 1; i++)
        for (ll j = 1; j < MAX - 1; j++)
            if (i != j)
                dp[i][j] = mx;
    ll n, m, q;
    cin >> n >> m >> q;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        dp[u][v] = min({dp[u][v], w, dp[v][u]});
        dp[v][u] = min({dp[v][u], w, dp[u][v]});
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {

                if (dp[i][j] > dp[i][k] + dp[k][j])
                {

                    dp[i][j] = dp[i][k] + dp[k][j];
                    dp[j][i] = min(dp[i][j], dp[j][i]);
                    //   cout << "dp[i][j]--->" << dp[i][j] << "\n";
                }
            }
        }
    }
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if (dp[x][y] >= mx)
            cout << -1 << "\n";
        else
            cout << dp[x][y] << "\n";
    }
}