#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000005
#define pb push_back
#define nn "\n"
#define ss ' '

vector<ll> v;
vector<ll> adj[MAX];
ll ar[MAX], vis[MAX];
bool cycle;

void dfs(ll u)
{
    vis[u] = 1;
    for (auto v : adj[u])
    {
        if (!vis[v])
            dfs(v);
        else if (vis[v] == 1)
        {
            cycle = 1;
        }
    }
    vis[u] = 2;
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
    cycle = 0;
    for (ll i = 0; i < node; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
        cout << "NO" << nn;
    else
        cout << "YES" << nn;
}