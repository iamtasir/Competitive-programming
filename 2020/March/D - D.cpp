
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
   while(t--){
        ll n;
      cin>>n;
       ll temp,temp2,temp3,ans=0;
      while(n!=0){

      if(n>=100){
          ans=ans+(n/100);
          n=n%100;
          if(n==0){
                cout<<ans<<nn;
                break;
          }
          }
          else if(n>=50)
          {
              ans=ans+(n/50);
              n=n%50;
              if(n==0){
                cout<<ans<<nn;
                break;
              }
          }
          else if(n>=10)
          {
              ans=ans+n/10;
              n=n%10;
               if(n==0){
                cout<<ans<<nn;
                break;
              }

          }
        else if(n>=5)
          {
              ans=ans+n/5;
              n=n%5;
              if(n==0){
              cout<<ans<<nn;
              break;
              }


          }
           else if(n>=2)
          {
              ans=ans+n/2;
              n=n%2;
              if(n==0){
              cout<<ans<<nn;
              break;
              }
          }
           else if(n>=1)
          {
              ans=ans+(n/1);
              n=n-1;
              if(n==0){
              cout<<ans<<nn;
              break;
              }
          }



   }
 //  cout<<ans<<nn;
   }

    return 0;
}
