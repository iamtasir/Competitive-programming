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
vector<ll>adj[100];
bool vis[100];
void dfs(ll s)
{

    vis[s]=true;
    for(ll i=0;i<adj[s].size();i++)
    {
        //cout<<adj[s].size()<<"#"<<nn;

        if(vis[adj[s][i]]==false){
        cout<<adj[s][i]<<"&"<<ss;
        dfs(adj[s][i]);
    }

}
}
void intialize()
{
    for(ll i=0;i<10;i++)
        vis[i]=false;
}
int main()
{
   ll t,node,edge,count=0;
   cin>>node>>edge;

  for(ll i=0;i<edge;i++)
  {
      ll x,y;
   cin>>x>>y;
   adj[y].push_back(x);
   adj[x].push_back(y);
  }
  for(ll i=1;i<=node;i++)
  {
      if(vis[i]==false){
           // cout<<i<<"*"<<nn;
        dfs(i);
        count++;
      }


  }
  cout<<count<<nn;

    return 0;
}
