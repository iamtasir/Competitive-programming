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
#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   for(ll i=1;i<=t;i++){
        ll a,b,c,n;
       cin>>a>>b>>c>>n;
       ll temp=abs(a-b);
       ll temp2=abs(b-c);
       if(temp2==temp&&a>-1&&b>-1&&c>-1&&a<b&&b<c)
       {
           //cout<<temp2*n;
            cout<<"Case"<<ss<<i<<":"<<ss<< temp2*n;
       }
       else  if(temp2==temp&&a>-1&&b<-1&&c<-1&&a<b&&b<c)
       {
           //cout<<temp2*n;
            cout<<"Case"<<ss<<i<<":"<<ss<< -temp2*n;
       }
   else    if(temp2==temp&&a>b&&b>c)
       {
           ll ans=n-3;
           ans=ans*temp2;
           ans=c-ans;
           cout<<"Case"<<ss<<i<<":"<<ss<< ans;
       }
       else
      cout<<"Case"<<ss<<i<<":"<<ss<<"Error";

   }
      // else if(temp2==temp&&a<0&&b<0&&c<0))
       //{
         //  cout<<-temp2*n;

       //}


    return 0;
}
