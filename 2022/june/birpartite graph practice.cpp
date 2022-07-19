#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define ss ' '
#define pb push_back

#define MAX 1000005

vector<ll> v;
vector<ll> adj[MAX];
ll vis[MAX];
bool ok;
ll col[MAX];
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
        else
        {
            if (col[u] == col[v])
            {
                ok = 1;
            }
        }
    }
}

int main()
{
    ll node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ok = 0;
    for (ll i = 1; i <= node; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ok)
        cout << "NO" << nn;
    else
        cout << "Yes" << nn;
}