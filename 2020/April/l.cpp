
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
//#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005


int main()
{
 O_O ;
   string a,b;

   while(getline(cin,a)){
        getline(cin,b);
        // cin>>b;
       // cout<<a<<b<<nn;
       ll l=a.length();ll ans=0;ll l2=b.length();ll ans2=0;
      for(ll i=0;i<l;i++ )
      {
          ll temp=a[i]-'\0';
       //   cout<<temp<<nn;
          if(temp>=97&&temp<=123)
            ans+=(temp-96);
          else if(temp>=65&&temp<=90)
            ans+=(temp-64);
         // cout<<temp<<nn;
      }
        for(ll i=0;i<l2;i++ )
      {
          ll temp=b[i];
          if(temp>=97&&temp<=123)
            ans2+=(temp-96);
          else if(temp>=65&&temp<=90)
            ans2+=(temp-64);
         // cout<<temp<<nn;
      }
  //   cout<<ans<<ss<<ans2<<nn;
  //   ll temp3=0
    // ll temp4=0;
ll    t4=ans;
    while(t4>99)
    {
        int temp4=t4%10;
        int t2=t4/100,t3=(t4/10)%10;
         t4=temp4+t2+t3;
        }
    while(t4>9){
            int x1=t4/10;
            int x2=t4%10;
           t4=x1+x2;
    }
      while(ans2>99)
    {
        int temp4=ans2%10;
        int t2=ans2/100,
        t3=(ans2/10)%10;
        ans2=temp4+t2+t3;
        }
    while(ans2>9){
            int x1=ans2/10;
            int x2=ans2%10;
           ans2=x1+x2;
    }
  // cout<<t4<<nn<<ans2<<nn;;
   dl mi=min(t4,ans2),ma=max(t4,ans2);
  // cout<<mi<<nn<<ma<<nn;
   dl fi=(mi*100)/ma;
   cout<<fixed;
   cout<<setprecision(2);
   cout<<fi<<ss<<"%"<<nn;


   }


    return 0;
}
