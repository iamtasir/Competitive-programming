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
   ll n,a,b,c,d;
   string s;
   cin>>s;
   cin>>n;
   a=s[0]-'0';
   a=a*10;
   b=s[1]-'0';
   a=a+b;

   c=s[3]-'0';
   c*=10;
   d=s[4]-'0';
   c=c+d;
  // cout<<a<<nn<<c;
ll  ans=a*60+c+n;
//cout<<ans<<nn;
  if(ans>=1440)
  {
      ll x=ans%1440;
      ll temp3=x/60;
      ll temp4=x%60;
     // cout<<temp3<<nn;
      if(temp3<=9)
      cout<<"0"<<temp3<<":";
      else
        cout<<temp3<<":";
      if(temp4<=9)
      cout<<"0"<<temp4<<nn;
      else
        cout<<temp4<<nn;

  }
  else{
        ll x=ans;
       ll temp3=x/60;
      ll temp4=x%60;
     // cout<<temp3<<nn;
      if(temp3<=9)
      cout<<"0"<<temp3<<":";
      else
        cout<<temp3<<":";
      if(temp4<=9)
      cout<<"0"<<temp4<<nn;
      else
        cout<<temp4<<nn;

  }
   // cout<<ans/60<<":"<<ans%60<<nn;

    return 0;
}
