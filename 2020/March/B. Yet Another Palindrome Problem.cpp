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
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll ar[100000],br[10000],n,p=0,cr[100];
      cin>>n;
      for(ll i=0;i<n;i++){
        cin>>ar[i];
        br[i]=ar[i];

      }
      if(n==3){
      reverse(ar,ar+n);
     // for(ll i=0;i<n;i++){
       // cout<<ar[i]<<ss;
        //cout<<br[i]<<ss;

      for(ll i=0;i<n;i++)
      {
          if(ar[i]!=br[i])
          {
             p=1;
          //   cout<<"in"<<nn;
             break;

          }
      }
      if(p)
        cout<<"NO"<<nn;
      else
        cout<<"YES"<<nn;



      }
   else
   {
       for(ll i=0;i<n-3;i++)
       {
           ll count=0;
           cr[0]=ar[i],cr[1]=ar[i+1];
           cr[2]=ar[i+2];
           reverse(cr,cr+3);
        for(ll i=0;i<n;i++)
       cout<<cr[i]<<ss;

           for(ll j=i,k=0;j<i+3,k<3;j++){

            if(ar[j]==cr[k])
           {
               count++;
               if(count==3){
                    p=1;
                break;

               }
           }
       }
       }
       if(p)
        cout<<"YES"<<nn;
       else
        cout<<"NO"<<nn;

   }


   }



    return 0;
}
