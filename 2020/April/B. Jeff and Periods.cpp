
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
//sort(a,a+n,greater<ll>())
#define MAX 1000005
ll ar[MAX]={0},br[MAX]={0};

int main()
{
 //O_O ;
   ll n;
   cin>>n;
   for(ll i=1;i<=n;i++)
   {
      ll temp;cin>>temp;
     if(ar[temp]==0) ar[temp]=i;
     if(ar[temp]>0)
     {
         if(br[temp]==0)
         {
                br[temp]=i-ar[temp];
             ar[temp]=i;
         }
         else
         {
             if(i-ar[temp]==br[temp])
                ar[temp]=i;
             else
                ar[temp]=-1;
         }
     }
   } ll ans=0;
   for(ll i=1;i<=100000;i++)
   {
       if(ar[i]>0)
        ans++;
   }
   cout<<ans<<nn;
   for(ll i=1;i<=100000;i++)
   {
       if(ar[i]>0)
        cout<<i<<ss<<br[i]<<nn;
   }



    return 0;
}
