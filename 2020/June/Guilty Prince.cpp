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
#define MAX 22
ll vis[22][22];
char s[MAX][MAX];
ll cnt;
ll n,x;
void dfs(ll a,ll b)
{
    vis[a][b]=1;

    ll i,j;
    for(ll k=0; k<4; k++)
    {
        i=dx[k]+a;
        j=dy[k]+b;
        if(i<n&&i>=0&&j<x&&j>=0&&vis[i][j]==0&&s[i][j]=='.')
        {
            cnt++;
            dfs(i,j);
        }

    }


}
int main()
{
    ll t;
    ll f=0;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        cnt=1;

        cin>>x>>n;
// cin.ignore();
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<x; j++)
                cin>>s[i][j];
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<x; j++)
            {
                if(s[i][j]=='@')
                    dfs(i,j);
            }
        }
        cout<<"Case "<<++f<<": "<<cnt<<nn;

    }

    return 0;
}
