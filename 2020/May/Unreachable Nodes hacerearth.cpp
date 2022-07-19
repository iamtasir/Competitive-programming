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
bool vis[100005]={false};
vector<ll>adj[100005];ll ans=0;
void dfs(ll s)
{
    ans++;
    vis[s]=true;
    for(ll i=0; i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==false)
            dfs(adj[s][i]);
    }

}

int main()
{
   ll node,edge;
   cin>>node>>edge;


  for(ll i=0;i<edge;i++)
  {
      ll x,y;cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
   }
   ll x;cin>>x;
   dfs(x);
   cout<<node-ans;

    return 0;
}
