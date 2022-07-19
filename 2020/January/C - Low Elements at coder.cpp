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
typedef       pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
ll ar[1000000];
int main()
{
 //O_O ;
   ll t,count=0,a,ans=LLONG_MAX,temp;
   cin>>t;
  for(ll i=0;i<t;i++)
   {
       cin>>ar[i];
    }
     for(ll i=0;i<t;i++)
   {
       temp=ar[i];
       if(temp<ans){
       ans=min(ans,temp);
       count++;
       }
    }
   cout<<count<<nn;


    return 0;
}
