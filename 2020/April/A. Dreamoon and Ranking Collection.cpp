#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
//#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
      ll ar[1000]={0};;ll n,x;cin>>n>>x;ll count=0;
      for(ll i=1;i<=n;i++)
      {
          ll temp;cin>>temp;
          ar[temp]=1;
      }
     //for(ll i=1;i<=10;i++)
   // cout<<ar[i]<<nn;
  //  if(n==1&&x==100){
    //    cout<<101<<nn;
  // continue;
    //}
      for(ll i=1;i<=300;i++)
      {
          if(ar[i]==0)
          {
              x--;
              ar[i]=1;
             // cout<<count<<"in"<<nn
            if(x==0)
                break;
          }
          }
          for(ll i=1;i<=300;i++){
            if(ar[i]==0){
            cout<<i-1<<nn;
            break;
            }
          }
    }


    return 0;
}
