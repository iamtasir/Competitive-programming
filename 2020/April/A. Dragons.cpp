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
//for (auto& t : myMap) std::cout << t.first << " " << t.second.first << " " << t.second.second << "\n";
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
multimap<ll,ll>mp;
   ll a,n;
   cin>>a>>n;ll p=0;
   for(ll i=0;i<n;i++)
   {
       ll temp,temp2;cin>>temp>>temp2;
       mp.insert({temp,temp2});
   }
   for (auto it = mp.cbegin(); it != mp.cend(); ++it){
        ll temp=a;
        ll temp2=it->first;
        ll temp3=it->second;
  //   cout<<temp2<<ss<<temp3<<ss<<"*"<<nn;
        if(temp>temp2) a+=temp3;
        else p=1;

   }
   if(p) cout<<"NO"<<nn;
   else
    cout<<"YES"<<nn;




    return 0;
}
