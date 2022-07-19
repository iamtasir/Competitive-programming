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
ll ar[10000];

int main()
{
 O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,n,sum=0,cnt=0;
        cin>>n;
     for(ll i=0;i<n;i++){
        cin>>ar[i];

        if(ar[i]==0){
            cnt++;
         ar[i]=1;
        }
            sum=sum+ar[i];
     }
    // sort(ar,ar+n);
  //   ll temp=0-ar[0]+1;
     if(sum!=0&&cnt==0)
        cout<<0<<nn;
     else if(sum!=0&&cnt!=0)
        cout<<cnt<<nn;
     else if(sum==0)
        cout<<cnt+1<<nn;



   }


    return 0;
}
