#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss ' '
#define nn "\n"
#define MAX 10000005

ll n, m;
vector<ll> adj[MAX];
ll ar[MAX];
ll vis[MAX];
ll par[MAX];
ll distan = INT_MAX;
ll node;
ll x;
ll dis[MAX];
void bfs(ll u)
{

    queue<ll> q;

    q.push(u);
    ll dis1 = 0;
    par[1] = -1;
    dis[1] = 1;
    vis[1] = 1;
    while (!q.empty())
    {

        ll u = q.front();
        q.pop();

        for (auto v : adj[u])
        {

            if (v == n)
            {
                x = 1;
                if (dis[u] + 1 < dis[v])
                {

                    par[v] = u;
                    dis[v] = dis[u] + 1;
                }
            }

            else if (!vis[v])
            {
                par[v] = u;
                dis[v] = dis[u] + 1;
                q.push(v);
                vis[v] = 1;
            }
        }
    }
}

int main()
{
    memset(dis, MAX, sizeof(dis));
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    x = 0;
    bfs(1);
    if (x == 0)
    {
        cout << "IMPOSSIBLE" << nn;
        return 0;
    }
    cout << dis[n] << nn;
    vector<ll> v1;
    node = n;
    v1.push_back(node);
    while (par[node] != -1)
    {
        // cout << par[node] << ss;
        v1.push_back(par[node]);
        node = par[node];
    }
    reverse(v1.begin(), v1.end());
    for (auto l : v1)
        cout << l << ss;
    // cout << nn;
}