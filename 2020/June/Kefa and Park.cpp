#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		ss              ' '
 //memset(ar,-1,sizeof(ar));
int xx[]= {0,0,1,1,-1,-1,1,-1}; //For 8 direction
int yy[]= {1,-1,1,-1,1,-1,0,0}; // For 8 direction
int dx[] = {0, 0, -1, 1} ; //for 4 direction
int dy[] = {1, -1, 0, 0} ; // for 4 direction
#define MAX 100005
ll ar[MAX],vis[MAX]={0};
ll ans=0;
ll c=0;
vector<ll>adj[MAX];
ll x;
void dfs(ll p,ll q)
{

    vis[p]=1;
    if(q>x) return ;

   ll f=0;

    for(ll j=0;j<adj[p].size();j++)
    {
       ll v=adj[p][j];
        if(vis[v]==0)
        {
            f=1;
            if(ar[v])
                dfs(v,q+1);
            else
                dfs(v,0);


        }
    }
    if(f==0)
        ans++;
}
int main()
{
   ll n;
cin>>n>>x;
  for(ll i=1;i<=n;i++)
  {
   cin>>ar[i];
   }
   for(ll i=1;i<n;i++)
   {
       ll a,b;cin>>a>>b;
       adj[a].pb(b);
       adj[b].pb(a);
   }
  dfs(1,ar[1]);
    cout<<ans<<nn;
    return 0;
}
