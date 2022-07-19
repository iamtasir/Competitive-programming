#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10005
typedef pair<ll, ll> pll;

#define ss ' '
#define nn "\n"
vector<ll> adj[MAX];
map<pll, ll> mp;
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

    for (auto v1 : adj[u])
    {
        if (!vis[v1])
        {
            // v.push_back({u, v1});
            parent[v1] = u;
            dfs(v1, cnt);
            if (intime[u] < lowtime[v1])
            {
                ans++;
                ll x = u, y = v1;
                if (x > y)
                    swap(x, y);
                mp[{x, y}]++;
            }
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
        cout << "Case " << k << ": " << nn;

        memset(parent, -1, sizeof(parent));
        memset(vis, 0, sizeof(vis));
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll u;
            cin >> u;
            ll m;
            char c, c1;
            cin >> c >> m >> c1;
            for (ll i = 0; i < m; i++)
            {
                ll v;
                cin >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
                // cout << u << " " << v << nn;
            }
        }

        ans = 0;
        for (ll i = 0; i < n; i++)
            if (!vis[i])
                dfs(i, 0);

        cout << (ll)mp.size() << ss << "critical links" << nn;
        for (auto l : mp)
        {

            cout << l.first.first << " - " << l.first.second << nn;
        }
        for (ll i = 0; i <= n; i++)
            vis[i] = 0, parent[i] = 0, adj[i].clear();
        mp.clear();
    }
}