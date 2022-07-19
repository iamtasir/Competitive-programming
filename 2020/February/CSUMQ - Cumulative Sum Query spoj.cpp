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

ll ar[100000];
int main()
{
 O_O ;

   ll n,ans,a,t;
   cin>>n;
   cin>>ar[0];
   for(ll i=1;i<n;i++){

     cin>>ar[i];
     ar[i]+=ar[i-1];
    //cout<<ar[i]<<i<<nn;
   }
   cin>>t;
   while(t--){
      ll x,y;
      cin>>x>>y;
      x=x-1;
      if(x>=0){
        ans=ar[y]-ar[x];
      }
      else
        ans=ar[y];

    cout<<ans<<nn;

   }



    return 0;
}
