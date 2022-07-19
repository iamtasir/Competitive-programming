

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
ll value(ll temp)
{

  if(temp==0)
    return 6;
  else if(temp==1)
    return 2;
  else if(temp==2)
    return 5;
  else if(temp==3)
    return 5;
  else if(temp==4)
    return 4;
     else if(temp==5)
    return 5;
   else if(temp==6)
    return 6;
     else if(temp==7)
    return 3;
     else if(temp==8)
    return 7;
    else if(temp==9)
        return 6;
}


int main()
{
 //O_O ;
   ll a,b,ans=0;
   cin>>a>>b;
 for(ll i=a;i<=b;i++)
 {
     ll x=i;
     while(x)
     {
         ll temp3=x%10;
         // cout<<temp3<<nn;
        ll temp2=value(temp3);
         ans=ans+temp2;
         x=x/10;
     }
 }
 cout<<ans<<nn;

    return 0;
}
