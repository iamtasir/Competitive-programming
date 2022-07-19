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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
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
#define	       ff               first
#define	       sc              second
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
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b;
   cin>>a>>b;
   if(a<b)
    swap(a,b);
   ll s1,s2;
   cin>>s1>>s2;
   ll x,y;cin>>x>>y;
   if(x>y){
    swap(x,y),swap(s1,s2);

   }
   ll mi=min(a/x,s1);
   ll ans=0;
  // cout<<x<<y<<nn;
   for(ll i=0;i<=mi;i++)
   {
       ll an=a,bn=b,s1n=s1,s2n=s2,xn=x,yn=y;
   ll   mini1=i;
       s1n-=mini1,an-=mini1*x;
     //  cout<<"mini1"<<ss<<mini1<<nn;
       ll mini3=min(an/y,s2n);
       s2n-=mini3;
       //cout<<"an"<<ss<<an<<nn;
         //cout<<"mini3"<<ss<<mini3<<nn;
       ll mini2=min(bn/x,s1n);
       s1n-=mini2,bn-=mini2*x;
         //cout<<"min2"<<ss<<mini2<<nn;


    ll mini4=min(bn/y,s2n);
    //   cout<<"mini4"<<ss<<mini4<<nn;
       ans=max(mini1+mini2+mini3+mini4,ans);
      // cout<<"i"<<ss<<i<<nn;
}
   cout<<ans<<nn;


   }


    return 0;
}
