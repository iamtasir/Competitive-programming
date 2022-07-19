#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
#define mx 1000005
#define ll long long
#define nn "\n"
#define ss ' '
typedef pair<ll, ll> pll;

ll n, m;
ll dx[] = {0, 0, -1, 1, -1, -1, 1, +1};
ll dy[] = {1, -1, 0, 0, +1, -1, 1, -1};
map<pll, ll> vis;
string s[mx];
ll ans = INT_MAX;

deque<pair<pll, ll>> pq;
void bfs(ll z)
{

    //  pq.push({{i1, j1}, dis1});
    while (!pq.empty())
    {
        auto q = pq.front();
        pq.pop_front();
        ll i = q.first.first;
        ll j = q.first.second;
        ll dis = q.second;
        if (i == 0 || j == m - 1)
        {
            ans = min(ans, dis);
            continue;
        }
        // cout << i << ss << j << ss << dis << ss << s[i][j] << nn;
        for (ll k = 0; k < 8; k++)
        {
            ll x = i + dx[k];
            ll y = j + dy[k];
            if (vis[{x, y}])
            {
                continue;
            }
            if (x < 0 || x >= n - 1 || y < 0 || y > m - 1 || s[x][y] == '@')
            {
                continue;
            }
            if (s[x][y] == '#')
            {
                pq.push_front({{x, y}, dis});
                vis[{x, y}] = 1;
            }
            else if (s[x][y] == '.')
            {
                pq.push_back({{x, y}, dis + 1});
                vis[{x, y}] = 1;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n)
    {
        ans = INT_MAX;
        cin >> m;
        if (n == 0 && m == 0)
        {
            break;
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        // if (s[0][0] == '.' || s[0][0] == '#' || s[n - 1][m - 1] == '.' || s[n - 1][m - 1] == '#')
        // {
        //     ans = 0;
        //     cout << ans << nn;

        //     continue;
        // }
        // for (ll i = 0; i < n; i++)
        //     for (ll j = 0; j < m; j++)
        //         if (s[i][j] == '@')
        //             vis[{i, j}] = 1;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 1; j++)
            {
                // cout << i << ss << j << nn;
                if (s[i][j] == '.')
                {

                    pq.push_back({{i, j}, 1ll});
                    vis[{i, j}] = 1;
                }
                if (s[i][j] == '#')
                {

                    pq.push_front({{i, j}, 0ll});
                    vis[{i, j}] = 1;
                }
            }
        }
        for (ll i = n - 1; i < n; i++)
        {
            for (ll j = 1; j < m; j++)
            {
                if (s[i][j] == '.')
                {

                    pq.push_back({{i, j}, 1ll});
                    vis[{i, j}] = 1;
                }
                if (s[i][j] == '#')
                {

                    pq.push_front({{i, j}, 0ll});
                    vis[{i, j}] = 1;
                }
            }
        }
        bfs(1);
        if (ans != INT_MAX)
            cout << ans << nn;
        else
            cout << -1 << nn;
        vis.clear();
    }
}