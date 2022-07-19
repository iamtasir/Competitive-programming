
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
 ll ar[MAX],br[MAX],ans[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b,n;
        cin>>n;

      for(ll i=0;i<n;i++)
        cin>>ar[i];
      for(ll i=0;i<n;i++)
        cin>>br[i];
    //  sort(ar,ar+n);
     // sort(br,br+n);
      for(ll i=0;i<n;i++)
      {
          ans[i]=ar[i]+br[i];

      }
      for(ll i=0;i<n;i++)
      {
          for(ll j=0;j<n;j++)
          {
              if(ans[i]==ans[j])
              {
                  if(i!=n-1)
                  swap(ar[i],ar[i+1]);
                  else
                    swap(ar[i],ar[i-1]);
      }
          }
      }
       for(ll i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<nn;
      for(ll i=0;i<n;i++)
        cout<<br[i]<<" ";
        cout<<nn;


   }


    return 0;
}
