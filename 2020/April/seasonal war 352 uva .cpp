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
string s[105];
bool dis[105][105];
ll t,n,x=1,ans;
void dfs(ll ux, ll uy)
{      ll vx,vy;
    for(ll i=0;i<8;i++)
    {
        vx=ux+xx[i];
        vy=uy+yy[i];
        if(vx<0||vy<0||vx>=n||vy>=n)

            continue;

        if(dis[vx][vy]==1||s[vx][vy]=='0') continue;

        if(dis[vx][vy]==0&&s[vx][vy]=='1')
        {
            dis[vx][vy]=1;
            dfs(vx,vy);
        }
    }
}
int main()
{

   while(cin>>n){
         ans=0;
        memset(dis,0,sizeof(dis));
  for(ll i=0;i<n;i++)  cin>>s[i];
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<n;j++)
       {
           if(dis[i][j]==0&&s[i][j]=='1')
           {
               ans++;
               dis[i][j]=1;
               dfs(i,j);
           }
       }
   }
   cout<<"Image number "<<x++<<" contains "<<ans<<" war eagles."<<nn;


   }

    return 0;
}
