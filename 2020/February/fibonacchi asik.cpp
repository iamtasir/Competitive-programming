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
typedef      vector< pair <ll, ll>>      vpll;
typedef		vector<ll>      vll;
ll ar[1000000];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,l=0;
      cin>>a;
      for(ll i=0;i<a;i++){
        cin>>ar[i];
      }
      if(ar[0]==ar[1])
        l++;
        else if(ar[0]!=ar[1])
        {
            if(ar[0]==0&&ar[1]==1)
            l++;
        }
      for(ll i=2;i<a;i++){
        if(ar[i-2]+ar[i-1]==ar[i]){
      // cout<<ar[i-2]+ar[i-1]<<nn;
       l++;
        }
      }

     // cout<<l<<nn;
      if(l==a-1)
        cout<<"FiBoNacCi_DaY."<<nn;
        else
        cout<<"NOT_A_FiBoNacCi_DaY!"<<nn;



   }


    return 0;
}
