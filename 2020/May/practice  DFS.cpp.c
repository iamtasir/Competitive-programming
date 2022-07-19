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
void dfs(ll n)
{
    if(n<0)
        return;
    cout<<n<<ss;
    dfs(n-2);
}
int main()
{
    ll t;cin>>t;
    while(t--){
   ll n; cin>>n;
   if(n<4)
   {
       cout<<-1<<nn;continue;
   }
  if(n%2)
    n--;
  dfs(n);
  cout<<4<<ss<<2<<ss;




    return 0;
}
