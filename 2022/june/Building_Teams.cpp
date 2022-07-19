#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define ss ' '
#define MAX 200005
vector<ll> adj[MAX];
ll col[MAX];
ll x = 0;
ll vis[MAX];
void dfs(ll u)
{
    vis[u] = 1;
    for (auto v : adj[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else if (vis[v])
        {
            if (col[u] == col[v])
            {
                x = 1;
            }
        }
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (ll i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i);
    if (x)
    {
        cout << "IMPOSSIBLE"
             << "\n";
    }
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            if (col[i])
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
        cout << "\n";
    }
}
