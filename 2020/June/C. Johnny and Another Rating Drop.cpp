
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
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
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
#define MAX 100005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll ar[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   for(ll i=0;i<10000;i++)
   {
       ar[i]=i+7;

   }
   while(t--){
        ll x=1,c=0;
       ll n;cin>>n;
       ll ans=0;
       ll temp=n/4;
       ll p=temp*4;
       if(n==0){
        ans+=1;
       }
       else if(n==1)
        ans+=3;
       else if(n==2)
        ans+=4;
       else if(n==3)
       ans+=7;

        else if(n>3)
        {
            ans+=7;
        for(ll i=4;i<p;i+=4)
           {
               ans+=ar[c];
               c++;
               x;
               if(x<c)
               {
                   c=0;
                   x++;
               }

           }
       if(n-p==0)
         ans+=1;
         else if(n-p==1)
        ans+=3;
          else if(n-p==2)
        ans+=4;
         else if(n-p==3)
        ans+=7;


        cout<<ans<<nn;


        }





   }


    return 0;
}
