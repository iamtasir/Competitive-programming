#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
#define ll long long
#define nn "\n"
#define ss ' '

string s[MAX];
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};
ll n, m;
ll vis[MAX][MAX];
ll ans;
void dfs(ll i, ll j)
{
    vis[i][j] = 1;
    for (ll k = 0; k < 4; k++)
    {
        if (i + dx[k] >= 0 && i + dx[k] < n && j + dy[k] >= 0 && j + dy[k] < m)
        {

            if (vis[i + dx[k]][j + dy[k]] == 0 && s[i + dx[k]][j + dy[k]] == '.')
                dfs(i + dx[k], j + dy[k]);
        }
    }
}

int main()
{

    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> s[i];
    // for (ll i = 0; i < n; i++)
    //     cout << s[i] << nn;
    ans = 0;
    for (ll i = 0; i < n; i++)
    {

        for (ll j = 0; j < m; j++)
        {
            // cout << ans << nn;
            if (s[i][j] == '.' && vis[i][j] == 0)
            {
                dfs(i, j);
                ans++;
            }
        }
        // cout << ans << nn;
    }
    cout << ans << nn;
}