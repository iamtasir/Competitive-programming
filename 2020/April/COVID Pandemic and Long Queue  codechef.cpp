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

ll ar[MAX];
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){ ll n;cin>>n;ll j=1;
   for(ll i=1;i<=n;i++)
   {
       ll a;cin>>a;
       if(a==1)
        ar[j++]=i;

   }
   ll ans=INT_MAX;
   for(ll i=2;i<j;i++)
   {
       ll temp=ar[i]-ar[i-1];
       ans=min(ans,temp);
       if(ans<6)
        break;
   }
 //  cout<<"j value"<<j<<nn;
  // cout<<"IN Ans"<<ans<<nn;
   if(ans>=6)
    cout<<"YES"<<nn;
   else
    cout<<"NO"<<nn;



   }


    return 0;
}
