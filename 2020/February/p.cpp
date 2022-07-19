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
#define MAX 100005
 ll a[MAX];

int main()
{
 //O_O ;
   ll t,mi,index;
   cin>>t;
   for(ll i=1;i<=t;i++)
  cin>>a[i];
  mi=a[1];
  index=1;
for(ll i=1;i<=t;i++)
{
if(mi<=a[i])
        {
            mi=a[i];
            index=i;
}
}
ll temp=t-index;
  for(ll i=index+1;i<t;i++)
    {
        if(a[i]<a[i+1])
      {
          if(a[i+1]>i+1)
            a[i+1]=a[i];
      }
    }
     for(ll i=index-1;i>=0;i--)
    {
        if(a[i]<a[i-1])
      {
          if(a[i]>i)
            a[i-1]=a[i];
      }
    }


  for(ll i=1;i<=t;i++)
   cout<<a[i]<<" ";
  cout<<nn;


    return 0;
}

