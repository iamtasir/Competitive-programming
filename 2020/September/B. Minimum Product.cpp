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
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
        ll a1=a,b1=b,x1=x,y1=y,n1=n;
   if(a<b){
    swap(a,b),swap(x,y);
   }
   if(a1<b1){
    swap(a1,b1),swap(x1,y1);
   }
 //  cout<<a1<<ss<<b1<<ss<<x1<<ss<<y1<<nn;
   ll dif1=a-x,dif2=b-y;
   ll mi=min(dif2,n);
  // cout<<"mi"<<mi<<nn;
   b-=mi,n-=mi;
   if(n)
   {
       ll temp=min(n,dif1);
       a-=temp,n-=temp;
   }
   ll dif3=a1-x1,dif4=b1-y1;
   ll mi1=min(dif3,n1);
   a1-=mi1,n1-=mi1;
   if(n1)
   {
       ll temp2=min(n1,dif4);
       b1-=temp2,n1-=temp2;

   }
//   cout<<a1*b1<<nn;
cout<<min(a*b,a1*b1)<<nn;

   }


    return 0;
}
