
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
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007

 ll ar[1010];

int main()
{
 //O_O ;
   ll n,ma=0,p;
   cin>>n;
  for(ll i=0;i<n;i++){
    cin>>ar[i];
   // ma=max(ar[i],ma);
    //if(ma==ar[i])
      //  p=i;
  }

  for(ll j=0;j<n;j++)
  {
ll c=1,d=0;

  for(ll i=j;i<n-1;i++){
    if(ar[i]<ar[i+1])
        break;
    else
    c++;
  }
   for(ll i=j;i>=1;i--){
      //  cout<<d<<nn;
    // cout<<ar[i]<<ss<<ar[i-1]<<"#"<<nn;
    if(ar[i]<ar[i-1])
        break;
    else
    d++;
   }
    ma=max(c+d,ma);
  }
   // cout<<c<<ss<<d<<"&"<<nn;
  cout<<ma<<nn;

    return 0;
}
