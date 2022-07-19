#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> adj[101000];
vector<pair<ll, ll>> adj2[100100];
ll ar[100100];
map<pair<ll, ll>, ll> mp;
ll vis[100100];
ll col[110000];
ll ok = 1;
void dfs(ll u)
{
    vis[u] = 1;
    for (auto l : adj2[u])
    {
        ll v = l.first,
           k = l.second;

        if (!vis[v])
        {
            col[v] = col[u] ^ k;
            dfs(v);
        }
        else
        {
            if (col[u] != col[v] ^ k)
                ok = 0;
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    ll one = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
            one++;
    }
    for (ll i = 1; i <= m; i++)
    {
        ll k;
        cin >> k;
        while (k--)
        {
            ll x;
            cin >> x;
            adj[x].push_back(i);
        }
    }
    if (one == n)
    {
        cout << "YES"
             << "\n";
        return 0;
    }

    for (ll i = 1; i <= n; i++)
    {
        ll u = adj[i][0];
        ll v = adj[i][1];
        adj2[u].push_back({v, ar[i] ^ 1});
        adj2[v].push_back({u, ar[i] ^ 1});
        // cout << u << " " << v << "\n";
    }
    for (ll i = 1; i <= m; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    // cout << ok << "\n";

    if (ok)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}
