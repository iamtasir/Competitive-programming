#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,p=0,temp,temp2,l;
   cin>>a;
    l=sqrt(a);
   for(ll i=2;i<=l;i++)
   {
       if(a%i==0){
          temp=i;
           a=a/i;
           p=1;
           break;



       }

   }
   if(p==1)
   {

      for(ll i=temp+1;i<sqrt(a);i++)
      if(a%i==0){
        temp2=i;
        a=a/i;
        p=2;
        break;

      }

   }
   if(p==2)
   {
       if(a!=temp&&a!=temp2&&temp!=temp2){
        cout<<"YES"<<nn;
         cout<<temp<<" "<<temp2<<" "<<a<<nn;
   }
   else
    cout<<"NO"<<nn;


   }
   else
    cout<<"NO"<<nn;




   }


    return 0;
}
