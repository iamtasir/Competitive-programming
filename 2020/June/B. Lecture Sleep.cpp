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
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll temp[MAX]={0};
 ll temp2[MAX]={0},ar[MAX],br[MAX],cr[MAX],dr[MAX];

int main()
{
 //O_O ;
   ll n,k,ma=INT_MIN;
   cin>>n>>k;
   for(ll i=1;i<=n;i++)
   {
       cin>>ar[i];
   }
      for(ll i=1;i<=n;i++)
   {
       cin>>br[i];
   }
      for(ll i=1;i<=n;i++)
   {
       if(br[i]==1)
        temp[i]=ar[i];
       else
        temp2[i]=ar[i];
   }
   for(ll i=1;i<=n;i++)
    temp[i]+=temp[i-1];
    for(ll i=1;i<=n;i++)
        temp2[i]+=temp2[i-1];
    for(ll i=1;i<=n-k+1;i++)
    {
       ll ans=temp[n]+temp2[i+k-1]-temp2[i-1];
      // cout<<i+k-1<<"#"<<nn;
        ma=max(ma,ans);
    }
    cout<<ma<<nn;



    return 0;
}
