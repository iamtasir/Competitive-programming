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

ll ar[MAX],br[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n,k,p=0;
        cin>>n>>k;
        for(ll i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
         for(ll i=0;i<n;i++)
            cin>>br[i];
sort(br,br+n,greater<ll>());
     for(ll i=0;i<n;i++)
     {
         for(ll j=0;j<n;j++)
         {
             if(k==0)
                    {
                        p=1;
                        break;
                    }
             if(ar[i]<br[i])
             {
                 swap(ar[i],br[i]);
                 k--;

             }

         }if(p==1)
                break;
     }
     ll ans=0;
     for(ll i=0;i<n;i++)
        ans+=ar[i];
     cout<<ans<<nn;

   }


    return 0;
}
