
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


int main()
{
 O_O ;
   ll t,b[10000],c;
   char a[10000];
   cin>>t;
   while(t--){
        ll ans=0,cnt=0;
        c=0;
        ll p=0;
      ll n;
      cin>>n;
      for(ll i=0,j=0;i<n;i++){
          cin>>a[i];


          }
  for(ll i=0;i<n;i++){
          if(a[i]=='A')
          {
              cnt=1;
          }
          else if(cnt==1&&a[i]=='P')
          {
              c++;
             ans = max(ans,c);
             if(a[i+1]=='A'&&a[i+1]<n-1){
                cnt=0;
                p=c;
                c=0;

          }
         // else if(a[i+1]<n-1)
          }
          }
          cout<<ans<<nn;


   }




    return 0;
}
