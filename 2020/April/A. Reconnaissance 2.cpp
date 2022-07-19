#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
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
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007

 ll ar[10000],br[100000];

int main()
{
 //O_O ;
   ll n;
   cin>>n;
   for(ll i=1;i<=n;i++)
       cin>>ar[i];
   ll mi=INT_MAX;
   br[1]=abs(ar[n]-ar[1]);
   mi=min(mi,br[1]);
  // cout<<mi<<nn;
   for(ll i=2;i<=n;i++)
   {
       br[i]=abs(ar[i]-ar[i-1]);
       mi=min(mi,br[i]);
     //  cout<<mi<<nn;
   }
  // cout<<mi<<ss<<"*"<<nn;
   if(mi==br[1])
    cout<<n<<ss<<1<<nn;
   else
   {
       for(ll i=2;i<=n;i++)
       {
           if(mi==br[i]){
            cout<<i-1<<ss<<i<<nn;
            break;
           }
       }
   }





    return 0;
}
