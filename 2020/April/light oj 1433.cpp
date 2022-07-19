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
//#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;ll i=1;
   while(t--){
       dl o1,o2,a1,a2,b1,b2;cin>>o1>>o2>>a1>>a2>>b1>>b2;
       dl x=sqrt(((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2)));
       cout<<x<<nn;
       dl y=sqrt(((o1-a1)*(o1-a1))+((o2-a2)*(o2-a2)));
       cout<<y<<nn;
       dl z=acos(((y*y)+(y*y)-(x*x))/(2*y*y));
       z=(z*y);
       cout<<"Case "<<i++<<": ";cout<<fixed;cout<<setprecision(8);
      cout<<z<<nn;


   }


    return 0;
}
