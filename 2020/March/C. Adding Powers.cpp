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


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll ar[10000];ll count=0,c=0,d=0;
        ll n,k;cin>>n>>k;
     for(ll i=0;i<n;i++)
        cin>>ar[i];
       for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++){
                if(ar[i]==ar[j]&&ar[i]!=0)
                  c++;
                 // cout<<c<<nn;
        }
        }

     for(ll i=0;i<n;i++)
     {
         ll temp=ar[i];
         if(temp==1&&d==0){
            count++;
            d=1;
         }
        else if(temp%k==0)
            count++;
     }
     if(count==n&&c==0)
        cout<<"YES"<<nn;
     else
        cout<<"NO"<<nn;



   }


    return 0;
}
