#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		ss              ' '
int xx[]= {0,0,1,1,-1,-1,1,-1}; //For 8 direction
int yy[]= {1,-1,1,-1,1,-1,0,0}; // For 8 direction
#define MAX 1000005
vector<ll>adj[10000];
ll vis[10000];

void dfs(ll s,ll dis)
{
    vis[s]=dis;
    for(ll i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==-1)
            dfs(adj[s][i],dis+1);
    }
}
int main()
{
   ll node,edge,n;
   cin>>n;
memset(vis,-1,sizeof(vis));
  for(ll i=0;i<n-1;i++)
  {
      ll x,y;
   cin>>x>>y;
   adj[x].pb(y);
   adj[y].pb(x);
   }
   ll dis=0;
   dfs(1,dis);
 for(ll i=0;i<10;i++)
    cout<<vis[i]<<nn;

    return 0;
}


