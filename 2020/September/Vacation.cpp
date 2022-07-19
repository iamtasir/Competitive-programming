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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll ar[MAX],br[MAX],cr[MAX],ar1[MAX],br1[MAX],cr1[MAX];

int main()
{
 //O_O ;
   ll n;
   cin>>n;
   for(ll i=1;i<=n;i++) cin>>ar[i],cin>>br[i],cin>>cr[i];
     ar1[n]=ar[n],br1[n]=br[n],cr1[n]=cr[n];
     for(ll i=n-1;i>=1;i--)
     {
        // cout<<"ar[i]"<<ar[i]<<nn;
         // cout<<"br1[i+1]"<<br1[i+1]<<nn;
         // cout<<"cr1[i+1]"<<cr1[i+1]<<nn;
         ar1[i]=max((ar[i]+br1[i+1]),(ar[i]+cr1[i+1]));
       //  cout<<"ar1[i]"<<ar1[i]<<nn;
         br1[i]=max((br[i]+ar1[i+1]),(br[i]+cr1[i+1]));
       //  cout<<"br1[i]"<<br1[i]<<nn;
         cr1[i]=max((cr[i]+ar1[i+1]),(cr[i]+br1[i+1]));
       //  cout<<"cr1[i]"<<cr1[i]<<nn;
    }
  /*   for(ll i=n-1;i>=1;i--)
     {
         br1[i]=max((ar[i]+ar1[i+1]),(cr[i]+cr1[i+1]));
    }
  for(ll i=n-1;i>=1;i--)
     {
         cr1[i]=max((br[i]+br1[i+1]),(ar[i]+ar1[i+1]));
    }
    */
    //ll temp=
    cout<<max(ar1[1],max(br1[1],cr1[1]))<<nn;
    return 0;
}
