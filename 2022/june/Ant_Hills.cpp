#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10005
typedef pair<ll, ll> pll;

#define ss ' '
#define nn "\n"
vector<ll> adj[MAX];
map<ll, ll> mp;
// map<pll, ll> cont;
ll cont[MAX];
ll intime[MAX];
ll lowtime[MAX];
ll vis[MAX];
ll parent[MAX];
vector<pll> v;
ll ok = 0;
ll ans = 0;
ll dfs(ll u, ll cnt)
{
    cnt++;
    intime[u] = cnt;
    lowtime[u] = cnt;
    vis[u] = 1;
    ll child = 0;
    for (auto v1 : adj[u])
    {
        child++;
        if (!vis[v1])
        {
            // v.push_back({u, v1});
            parent[v1] = u;
            dfs(v1, cnt);
            if (intime[u] <= lowtime[v1] && parent[u] != -1)
            {
                cont[u] = 1;
            }
            if (child > 1 && parent[u] == -1)
                cont[u] = 1;
            lowtime[u] = min(lowtime[u], lowtime[v1]);
        }
        else if (parent[u] != v1)
        {

            lowtime[u] = min(lowtime[u], intime[v1]);
        }
    }
}

int main()
{
    // memset(intime, 1e1, sizeof(intime));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for (ll k = 1; k <= test; k++)
    {
        cout << "Case " << k << ": ";

        memset(parent, -1, sizeof(parent));
        memset(vis, 0, sizeof(vis));
        ll n, m;
        cin >> n >> m;
        for (ll i = 0; i < m; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            // cout << u << " " << v << nn;
        }

        ans = 0;
        for (ll i = 1; i <= n; i++)
            if (!vis[i])
                dfs(i, 0);

        // cout << (ll)mp.size() << nn;
        // for (auto l : mp)
        // {
        //     if (l.second > 1)
        //         ans++;
        // }

        for (ll i = 1; i <= n; i++)
        {
            if (cont[i])
                ans++;
        }
        cout << ans << nn;
        for (ll i = 0; i <= n; i++)
            vis[i] = 0, parent[i] = 0, adj[i].clear(), cont[i] = 0;
        mp.clear();
    }
}