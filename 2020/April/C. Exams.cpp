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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
#define MAX 1000005
#define mod 1000000007
//bool cmp(const pair<int,int>& a, const pair<int,int>& b)
//{
  //  return a.second < b.second;
//}

int main()
{
 //O_O ;
   ll t;
  multimap<ll, ll>mp;ll ma=0,ma2=0;
   cin>>t;
   for(ll i=0;i<t;i++)
   {
       ll temp,temp2;
       cin>>temp>>temp2;
     //  ma=max(ma,temp),ma2=max(ma2,temp2);
        mp.insert({ temp, temp2 });


   }
   // sort(mp.begin(), mp.end());

multiset<pair<ll, ll>> b;
for (multimap<ll, ll>::iterator i=mp.begin(); i!=mp.end(); i++)
    b.insert(pair<ll, ll>((*i).first, (*i).second));

  ll mi=-1;
  for (auto it = b.begin(); it != b.end(); ++it){
    cout<<it->first<<ss<<it->second<<nn;}



       for (auto it = b.begin(); it != b.end(); ++it)
       {
           ll t=it->first;
           ll t1=it->second;
           if(t1>=mi )
            mi=t1;
           else
            mi=t;
         //   cout<<mi<<nn;
       }
       cout<<mi<<nn;





    return 0;
}
