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


 ll ar[100000],br[100000];
int main()
{
 //O_O ;
   ll n;
   cin>>n;
 for(ll i=0;i<n;i++)
 {
     cin>>ar[i]>>br[i];
 }
 ll c=0;
 for(ll i=0;i<n;i++)
 {
     ll x=ar[i],y=br[i];
     ll right=0,left=0,upper=0,down=0;
     for(ll j=0;j<n;j++)
     {
         if(ar[j]>x&&br[j]==y) right=1;
         else if(ar[j]<x&&br[j]==y) left=1;
         else if(ar[j]==x&&br[j]>y) upper=1;
         else if(ar[j]==x&&br[j]<y) down=1;

     }
     if(right==1&&left==1&&upper==1&&down==1)
        c++;
 }
 cout<<c<<nn;
    return 0;
}
