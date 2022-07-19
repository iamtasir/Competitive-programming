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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007


 ll ar[100000];

int main()
{
 //O_O ;
   ll n,p=0;
   cin>>n;
  for(ll i=1;i<=n;i++)
  {
      ll temp;cin>>temp;ar[temp]++;
      if(temp==5||temp==7)
        p=1;

  }
  if(p)
  {
      cout<<-1<<nn;
      return 0;
  }
  if(!ar[6]){
    cout<<-1<<nn;
    return 0;
  }
  ll x=n/3;
  ll a=ar[1]-ar[4],b=ar[2]-ar[4];

  if(a==ar[6]&&ar[6]==b+ar[3]&&ar[1]==x&&ar[2]>=ar[4]){
      for(ll i=1;i<=ar[4];i++)
          cout<<1<<ss<<2<<ss<<4<<nn;
       for(ll i=1;i<=b;i++)
       cout<<1<<ss<<2<<ss<<6<<nn;
      for(ll i=1;i<=ar[3];i++)
        cout<<1<<ss<<3<<ss<<6<<nn;
  }
  else
    cout<<-1<<nn;


    return 0;
}
