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
#define mod 1000000007


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   string s;
   while(t--){
         //   char x[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   ll n,a,b;cin>>n>>a>>b;
    ll temp=n%a;
   ll temp2=n/a;
   ll temp3=n-temp;
   ll l=a-b;
   for(ll i=0;i<temp2;i++){
    for(ll j=i;j<b+i;j++)
    {
       s.pb(97+j);
    }
    for(ll k=i;k<l+i;k++)
   {
       s.pb(97+b+i);

   }

   }
   cout<<s<<nn;

  s.erase(temp,temp+temp3);
  cout<<s;






  // for(ll i=0;i<temp3;i++)
    //cout<<s[i];

cout<<nn;

   s.clear();
   }


    return 0;
}
