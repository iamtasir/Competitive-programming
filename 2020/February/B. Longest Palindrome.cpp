
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
//typedef      vector< pair <ll, ll>>      vpll;
typedef		vector<ll>      vll;
int main()
{
 //O_O ;
   ll t,n,ans=0,scount=0,p;
   cin>>t>>n;
   string kr;
   for(ll k=1;k<=t;k++){
        ll count=0;
    string a,b;
    cin>>a;

    for(ll i=n-1,j=0;i>=0,j<n;i--,j++)
        b[j]=a[i];

    for(ll i=0;i<n;i++){

        if(a[i]==b[i])
         count++;
    }
    cout<<count<<nn;
   if(count==n){
        ans+=n;
        scount+=1;
        p=1;

   }
   else if(count!=n)
    p=0;
   if(p){

   for(ll i=ans-n,j=0;i<(n*scount)-1,j<n;i++,j++){
         kr[i]=a[j];
   }
   }
   }

   cout<<ans<<nn;
   cout<<kr<<nn;

    return 0;
}
