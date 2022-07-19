
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
ll n,m,c=0;
ll dfs(ll n,ll m){

    if(2*n<=m)
    {
        m/=2;
        c++;
        dfs(n,m);

    }
    else if(n>=m)
    {
        c+=(n-m);
        n=m;
        return c;
    }
    else if(2*n>m)
    {
        c+=m-n;
        return c;
    }
    else if(n==m)
        return c;




}
int main()
{

   cin>>n>>m;
  ll ans= dfs(n,m);
  cout<<ans<<nn;



    return 0;
}
