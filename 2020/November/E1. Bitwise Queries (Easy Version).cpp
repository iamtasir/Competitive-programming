
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
#define MAX 100005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll fxor(ll a,ll b)
 {
     cout<<"XOR "<<a<<ss<<b<<nn;
     cout.flush();
     ll x;cin>>x;return x;

 }
 ll fand(ll a, ll b)
 {
     cout<<"AND "<<a<<ss<<b<<nn;
     cout.flush();
     ll x;cin>>x;return x;
 }

int main()
{
 //O_O ;

   ll n;cin>>n;
   ll ar[n+1];
   ll xyxor=fxor(1,2);
   ll xyand=fand(1,2);

   ll xzxor=fxor(1,3);
   ll xzand=fand(1,3);

   ll yzxor=xyxor^xzxor;
   ll yzand=fand(2,3);
   ll xpy=xyxor+2*xyand;
   ll xpz=xzxor+2*xzand;
   ll ypz=yzxor+2*yzand;

   ll y=xpy-xpz;
   y=(y+ypz)/2;
   ll x=xpy-y,z=ypz-y;

   ar[1]=x,ar[2]=y,ar[3]=z;
   for(ll i=4;i<=n;i++)
   {
       ll xor1i=(1,i);
       ar[i]=(xor1i^ar[1]);
   }
   cout<<"!"<<ss;
   for(ll i=1;i<=n;i++)
    cout<<ar[i]<<ss;
   cout<<nn;
   cout.flush();


    return 0;
}
