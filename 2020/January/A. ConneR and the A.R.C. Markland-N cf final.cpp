#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
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
typedef       set <ll>      sll;
typedef       set <int>     si;



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n,s,k;
       cin>>n>>s>>k;
       sll a;
       for(ll i=0;i<k;i++)
      {
          ll b;
          cin>>b;
          a.insert(b);
    }
    for(ll i=0;;i++){
        if((s+i)<=n&&a.find(s+i)==a.end()){
            cout<<i<<nn;
     ll x=(s+i);
  //   cout<<x<<nn;
            break;
        }
        if((s-i)>0&&a.find(s-i)==a.end()){
            cout<<i<<nn;
//            ll y=a.end();
            break;

        }


    }



   }


    return 0;
}
