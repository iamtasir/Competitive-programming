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
#define MAX 1000005


int main()
{
//O_O ;
    ll ar[10000];
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    for(ll i=1; i<=n; i++)
    {
        cin>>ar[i];
        ans+=ar[i];
    }
    sort(ar,ar+n+1);
    //for(ll i=1; i<=n; i++)
      //  cout<<ar[i]<<nn;
    dl temp2=1.0/(4*m);
    ll temp=(ans*temp2);
  //  cout<<temp<<nn;
    //cout<<temp<<nn;
    if(ar[n-m+1]>=temp)
        cout<<"Yes"<<nn;
    else
        cout<<"No"<<nn;

    return 0;
}
