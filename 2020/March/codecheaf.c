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
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b;
     cin>>a>>b;
  if(a>9&&b>9){
  ll a1=a/10,a2=a%10, b=b/10,b2=b%10;

     if(a1<a2&&b2<b1&&b2>a1&&a>9&&b>9)

         swap(a1,b2);

     else if(a1<a2&&b1<b2&&b2>a1&&a>9&&b>9)
         swap(a1,b2);
      else if(a1>a2&&b1>b2&&a>9&&b>9)
           no change
      else if(a1>a2&&b1<b2&&b2>a1&&a>9&&b>9)
         swap(a1,b2);
      ll ans=((a1*10)+a2+(b1*10)+b2)

      cout<<ans<<nn;
    }
 else if(b>9&&a<=9){
        b1=b/10;
        b2=b%10;
        a1=a;
     else if(b1<b2&&a1>b1)
           swap(a1,b1);
      else if(b1>b2&&a1>b1)
           swap(a1,b1);
    ll ans=(a1+(b2*10)+b2)
 }

 else if(a>9&&b<=9){
           if(a1>b1)
           swap(a1,b1);
     ll ans=((a1*10)+a2+b1)
 }
 else
    cout<<a+b<<nn;
    return 0;
}
