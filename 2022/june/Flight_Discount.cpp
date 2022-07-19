#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define ll long long
#define nn "\n"
#define ss ' '
const ll inf = 1e8 + 7;
typedef pair<ll, ll> pll;

vector<ll> adj[MAX], cost[MAX];
ll dis[MAX][2];
bool vis[MAX][2];
priority_queue<pair<ll, pll>> pq;
void dijkstra(ll cs, ll u1, ll ok1)
{

    while (!pq.empty())
    {

        auto p = pq.top();
        pq.pop();
        ll costvalue = p.first;
        ll u = p.second.first;
        ll ok = p.second.second;
        if (vis[u][ok])
        {
            continue;
        }
        vis[u][ok] = 1;
        for (ll i = 0; i < adj[u].size(); i++)
        {
            ll v = adj[u][i];
            ll newcost = cost[u][i];

            if (ok == 1)
            {
                if (dis[v][1] > dis[u][1] + newcost)
                {
                    dis[v][1] = dis[u][1] + newcost;
                    pq.push({-dis[v][1], {v, 1}});
                }
                continue;
            }

            if (dis[v][0] > dis[u][0] + newcost)
            {
                dis[v][0] = dis[u][0] + newcost;
                pq.push({-dis[v][0], {v, 0}});
            }
            if (dis[v][1] > dis[u][0] + (newcost / 2))
            {
                dis[v][1] = dis[u][0] + newcost / 2;
                pq.push({-dis[v][1], {v, 1}});
            }
        }
    }
}

int main()
{
    memset(dis, inf, sizeof(dis));
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        cost[u].push_back(w);
    }
    dis[1][0] = 0;
    dis[1][1] = 0;
    pq.push({0, {1, 0}});
    dijkstra(1, 1, 1);
    cout << min(dis[n][0], dis[n][1]) << nn;
}
