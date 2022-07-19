#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
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
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
 ll e=0,d=0,p=0;
   string  s;
   cin>>s;ll c=0;
   ll l=s.length();
   for(ll i=0;i<l;i++){
    if(s[i]!='1'&&s[i]!='4')
      c++;
   if(s[i]=='1')
        d++;
   if(s[i]=='4')
    e++;
    if(i>0&&s[i]=='4'&&s[i-1]=='4'&&s[i+1]=='4'&&i<l-1)
      p=1;
      if(s[i]=='4')
        p=1;
   }
  if(c)
    cout<<"NO"<<nn;
  //  else if(e>d)
    //    cout<<"NO"<<nn;
     else if(p)
            cout<<"NO"<<nn;
  else
    cout<<"YES"<<nn;



    return 0;
}
