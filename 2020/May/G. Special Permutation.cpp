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
void bfs(ll n){
      cout<<n<<ss;
      n-=2;
      if(n<0)
return;
      bfs(n);


}
void bfs2(ll n,ll x){
      cout<<n<<ss;
      n+=2;
      if(n>x)
       return;
       bfs2(n,x);


}
int main()
{
ll t;    cin>>t;
    while(t--){
   ll x;cin>>x;

   if(x<4)
   {
       cout<<-1<<nn;
       continue;
   }

      if(x%2==0){
        ll z=x-1;
        bfs(z);
      }
      else
        bfs(x);
     cout<<4<<ss<<2<<ss;
     if(6<=x)
        bfs2(6,x);

cout<<nn;

    }
    return 0;
}
