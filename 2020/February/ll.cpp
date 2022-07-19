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
typedef      vector< pair <ll, ll>>      vpll;
typedef		vector<ll>      vll;


int main()
{
 //O_O ;
   ll t,n,m;
   string s;
   cin>>t;
   while(t--)
   {

       cin>>n;
       cin.ignore();
       map<string , ll > mp;
       for(ll i=0;i<n;i++)
       {
           cin>>s;
           cin.ignore();
           sort(s.begin()+1,s.end()-1);
           //cout<<s<<nn;
           mp[s]++;

       }

       cin>>m;
       char k[1000];
       for(ll i=0;i<m;i++)
       {
           gets(k);


       }

       cout<<k;


   }


    return 0;
}
