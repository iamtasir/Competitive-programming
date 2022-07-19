#include <iostream>
#include<cstdlib>
#include<stdio.h>
#include<algorithm>
#include<set>
#include<vector>
#include<assert.h>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,a,n) for (int i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
const ll mod = 1000000007;
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

const int maxn = 1e5+5;
vector<int>adj[maxn];
int a[maxn]={0};
bool vis[maxn];
int ans=0,m,n;



void dfs(int u,int cat){
    vis[u] = 1;
    if(cat>m)return ;
    int flag = 0;
    for(ll j=0;j<adj[u].size();j++){
        int v = adj[u][j];
        if(!vis[v]){
            flag = 1;
            if(a[v]) dfs(v,cat+1);
            else dfs(v,0);
        }
    }
    if(flag==0) ans++;
}

int main(){
    cin>>n>>m;
          for(ll i=1;i<=n;i++)
  {
   cin>>a[i];
   }
        for(ll i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1,a[1]);
       cout<<ans<<endl;
    return 0;
}
