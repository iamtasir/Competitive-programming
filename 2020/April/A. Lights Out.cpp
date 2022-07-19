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
   ll ar[10][10];
   memset(ar,0,sizeof(ar));
   for(ll i=1;i<=3;i++)
   {
       for(ll j=1;j<=3;j++)
        cin>>ar[i][j];
   }
   for(ll i=1;i<=3;i++)
   {
       for(ll j=1;j<=3;j++)
       {
           ll temp=ar[i][j]+ar[i+1][j]+ar[i-1][j]+ar[i][j+1]+ar[i][j-1];
           if(temp%2==1)
            cout<<0;
           else
            cout<<1;
       }
       cout<<nn;
   }

    return 0;
}
