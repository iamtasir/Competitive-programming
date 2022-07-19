
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

ll a[100000009];
int main()
{
 //O_O ;
   ll t;
   int ans=0;
   cin>>t;
  for(ll i=0;i<t;i++){
    cin>>a[i];
}
  int cot=0;
  for(ll i=0;i<t-1;i++)
  {
      if(2*a[i]<a[i+1])
      {
          cot=0;

      }
      else
        cot++;

    ans=max(ans,cot);



  }
     cout<<ans+1<<nn;

    return 0;
}
