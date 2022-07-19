#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define ss ' '
#define MAX 1005

ll vis[MAX][MAX];
vector<ll> adj[MAX];
char s[MAX][MAX];
ll dis[MAX][MAX];
ll xx, yy;
ll n, m;
ll dx[] = {-1, 1, 0, 0};
ll dy[] = {0, 0, -1, 1};
string path = "UDLR";

int main()
{

    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> s[i][j];
        // cout << s[i] << nn;
    }
    queue<pair<ll, ll>> q;
    ll x = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == 'M')
                q.push({i, j});
            if (s[i][j] == 'A')
                xx = i, yy = j;
        }
    }
    // cout << n << ss << m << nn;
    // for (ll k = 0; k < n; k++)
    // {
    //     for (ll k1 = 0; k1 < m; k1++)
    //     {
    //         cout << s[k][k1];
    //     }
    //     cout << nn;
    // }
    //  cout << xx << ss << yy << nn;
    q.push({xx, yy});
    dis[xx][yy] = -1;
    while (!q.empty())
    {
        ll i = q.front().first;
        ll j = q.front().second;
        q.pop();
        if (s[i][j] == 'A' && (i == 0 || i == n - 1 || j == 0 || j == m - 1))
        {
            x = 1;
            cout << "YES" << nn;
            string ans;
            ll d = dis[i][j];
            // for (ll k = 0; k < n; k++)
            // {
            //     for (ll k1 = 0; k1 < m; k1++)
            //     {
            //         cout << s[k][k1];
            //     }
            //     cout << nn;
            // }
            while (d != -1)
            {
                ans += path[d];
                i -= dx[d];
                j -= dy[d];
                d = dis[i][j];
            }
            cout << ans.size() << nn;
            reverse(ans.begin(), ans.end());
            cout << ans << nn;

            return 0;
        }

        for (ll k = 0; k < 4; k++)
        {
            ll nx = i + dx[k];
            ll ny = j + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] != '.')
            {
                continue;
            }
            else
            {
                s[nx][ny] = s[i][j];
                if (s[nx][ny] == 'A')
                    dis[nx][ny] = k;
                q.push({nx, ny});
            }
        }
    }
    if (!x)
        cout << "NO" << nn;
}