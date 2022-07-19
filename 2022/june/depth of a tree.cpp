#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

vector<ll> adj[MAX];
ll vis[MAX], depth[MAX];
ll dep[MAX];
ll red = 0, index;
ll vis2[MAX], dep2[MAX];
void dfs(ll u, ll par)
{
    dep[u] = dep[par] + 1;
    vis[u] = 1;
    if (red < dep[u])
    {
        red = dep[u];
        index = u;
    }
    for (auto v : adj[u])
    {
        if (par == v)
            continue;
        if (!vis[v])
            dfs(v, u);
    }
}
void dfs2(ll u, ll par)
{
    dep2[u] = dep2[par] + 1;
    vis2[u] = 1;
    for (auto v : adj[u])
    {
        if (par == v)
            continue;
        if (!vis2[v])
            dfs2(v, u);
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

    dfs(1, 0);
    cout << index << "\n";
    dfs2(index, 0);
    // for (ll i = 1; i <= n; i++)
    //     cout << dep[i] << " ";
    for (ll i = 1; i <= n; i++)
    {
        cout << dep2[i] << " ";
    }
    cout << "\n";
}