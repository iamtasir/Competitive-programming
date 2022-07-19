#include<bits/stdc++.h>
using namespace std;
typedef        long long       ll;
#define        pb              push_back
#define        PB              pop_back
#define        nn              "\n"
#define        ss              ' '
 //memset(ar,-1,sizeof(ar));
int xx[]= {0,0,1,1,-1,-1,1,-1}; //For 8 direction
int yy[]= {1,-1,1,-1,1,-1,0,0}; // For 8 direction
int dx[] = {0, 0, -1, 1} ; //for 4 direction
int dy[] = {1, -1, 0, 0} ; // for 4 direction
#define MAX 1000005
//vector<ll>ar,br;
ll ar[MAX],br[MAX];
ll vis[20000]={0};
ll n;
void dfs(ll a)
{
    vis[a]=1;
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0&&(ar[i]==ar[a]||br[i]==br[a]))
            dfs(i);
    }
}


int main()
{
   ll cnt=0;
cin>>n;

  for(ll i=1;i<=n;i++)
  {
     cin>>ar[i]>>br[i];

  }


  for(ll i=1;i<=n;i++)
  {
      if(vis[i]==0)
      {
          cnt++;
          dfs(i);
      }
  }
  cout<<cnt-1<<nn;



    return 0;
}
