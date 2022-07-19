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
char adj[1010][1010];
bool vis[1010][1010]={false};
 ll n,m;
void dfs(ll i,ll j)
{
    ll x,y;
    vis[i][j]=true;
    if((i+j)%2==0)
        adj[i][j]='W';
    else
        adj[i][j]='B';
   // cout<<vis[i][j]<<nn;
    for(ll k=0;k<4;k++)
    {

        x=i+dx[k];
        y=j+dy[k];
   //  cout<<x<<"&"<<y<<nn;
        if(adj[x][y]=='.'&&x>=0&&y>=0&&y<m&&x<n&&vis[x][y]==false)
        {

            //adj[x][y]='W';
            dfs(x,y);
        }
    }


}

int main()
{
   ll node,edge;

   cin>>n>>m;

  for(ll i=0;i<n;i++)
  {

      cin>>adj[i];



   }
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<m;j++)
       {
           if(adj[i][j]=='.'&&vis[i][j]==false)
           {

               adj[i][j]='B';
               dfs(i,j);

           }
       }
   }
   for(ll i=0;i<n;i++)
    cout<<adj[i]<<nn;

    return 0;
}
