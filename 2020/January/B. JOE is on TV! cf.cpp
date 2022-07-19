#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      ld;
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
int main()
{
 //O_O ;
   ld t,s=0,ans;
   cin>>t;
   for(ld i=1;i<=t;i++)
       s+=1/i;

   printf("%.13Lf\n",s);


    return 0;
}
