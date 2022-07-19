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
#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll count=0;
      map<ll,ll >   mp;
        string s;cin>>s;
        ll k,x;cin>>k>>x;
        for(ll i=0;i<s.length();i++)
        {
            ll temp=s[i]-'0';


              if(mp[temp]<x){
                mp[temp]++;
                     count++;
              }
            else {
                    if(k>0)
                        k--;
              //cout<<mp[temp]-k<<nn;
              else
               break;
            }
                   //  cout<<count<<nn;
        }
   cout<<count<<nn;
 // mp.clear();


   }


    return 0;
}
