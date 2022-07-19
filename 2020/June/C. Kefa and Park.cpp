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
#define MAX 1000005
ll color[MAX];
 vector<ll>adj[MAX];
ll vis[MAX]={0};
 ll p=0;
void dfs(ll n,ll x)
{
    vis[n]=1;
    if(color[n]==1)
        p=p+1;
    else
        p=0;
    for(ll v:adj[n])
    {
        if(!vis[v])
            dfs(v,x);
    }


}

int main()
{
   ll n,m;cin>>n>>m;
   for(ll i=1;i<=n;i++)
    cin>>color[i];

  for(ll i=0;i<n;i++)
  {
    ll a,b;cin>>a>>b;
    adj[a].pb(b);

   }


   for(ll i=0;i<n-1;i++)
   {
    if(!vis[i])
    dfs(i,p);


   }
   cout<<p<<nn;

    return 0;
}
