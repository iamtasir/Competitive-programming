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


int main()
{
 //O_O ;
   ll t,ar[100000],arr[100000],n,p=0,sum=0;
   cin>>t;
   for(ll i=1;i<=t;i++){
    cin>>ar[i];
    sum+=ar[i];

   }
   cin>>n;
   for(ll i=1;i<=2*n;i++)
   {
       cin>>arr[i];
   }
   if(arr[2*n]<ar[t])
    cout<<-1<<nn;
   else
   {


   for(ll i=1;i<=t;i++)
   {
       for(ll j=1;j<=2*n;j++)
       {
           arr[j]=arr[j]-ar[i];
         //  cout<<ar[j]<<nn;
       }
   }
   for(ll i=1;i<=2*n;i++)
   {
       if(arr[i]==0){
        p=1;
        break;
       }
   }
   if(p==1)
   cout<<sum<<nn;
   else
    cout<<-1<<nn;

   }





    return 0;
}
