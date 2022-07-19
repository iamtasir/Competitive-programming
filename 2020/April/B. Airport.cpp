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


 ll ar[10000],br[10000];
int main()
{
 //O_O ;
   ll n,m;
   cin>>m>>n;ll ma=INT_MIN,mi=INT_MAX;ll x=m;
   for(ll i=0;i<n;i++)
   {
       cin>>ar[i],br[i]=ar[i];ma=max(ma,ar[i]);
       mi=min(mi,ar[i]);

   }
  ll ans=0;
       while(m>0)
       {
           for(ll i=0;i<n;i++){
              if(ar[i]==ma){
            ans+=ma;m--;
            if(m==0) break;
          //  cout<<m<<"*"<<nn;
                  ar[i]-=1;
                  }
    }ma-=1;
    }
  // for(ll i=0;i<n;i++) cout<<br[i]<<ss;
//cout<<x<<"*"<<nn;
 ll ans2=0,p=0;
    while(x>0)
    {
        for(ll i=0;i<n;i++)
        {
            if(br[i]>0){
            if(br[i]==mi)
            {
                br[i]-=1;ans2+=mi;x--;
            // cout<<x<<"#"<<nn;
               mi-=1;
             if(x==0) break;
                if(mi==0)
                {
                    p=1;break;
                }


            }

        }
        }
        if(x==0) break;
        if(p){
            mi=INT_MAX;
            for(ll i=0;i<n;i++)
        {
            if(br[i]>0) mi=min(mi,br[i]);
        }
        p=0;
    }
    }
       cout<<ans<<ss<<ans2<<nn;



    return 0;
}
