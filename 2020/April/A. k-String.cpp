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
//for (auto it = mp.begin(); it != mp.end(); ++it){cout << it->first << " " << it->second.first << " " << it->second.second << "\n";
//}}
#define MAX 1000005
#define mod 1000000007


char c[MAX];
int main()
{
 //O_O ;

 map<ll,ll>mp;
   ll n;string s;
   cin>>n>>s;ll l=s.length();ll ma=INT_MIN;
   for(ll i=0;i<l;i++)
   {
       ll temp=s[i]-'a'+1;
       mp[temp]++;
       ma=(ma,mp[temp]);
       //cout<<temp<<"*"<<nn;

   }
    cout<<ma<<"#"<<nn;
   ll temp2=l%n;ll j=0;
   ll x=mp.size();
   cout<<x<<"IN"<<nn;
   if(temp2==0&&x==n&&ma>=n)
   {
       for(ll i=0;i<n;i++)
       {
           for (auto it = mp.begin(); it != mp.end(); ++it)
               c[j++]=it->first+'a'-1;


       }
       cout<<c<<nn;
   }
  else if(x==1)
   {
       for(ll i=0;i<n;i++)
       {
           for (auto it = mp.begin(); it != mp.end(); ++it)
               c[j++]=it->first+'a'-1;


       }
       cout<<c<<nn;
   }
   else
    cout<<-1<<nn;


    return 0;
}
