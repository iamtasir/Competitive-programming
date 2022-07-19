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
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007

 ll ar[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        deque<ll>qu;
        ll n;cin>>n;
   for(ll i=0;i<n;i++)
      {
          ll a;cin>>a;
          qu.pb(a);
      }
   ll a=qu.front();qu.pop_front();
   ll b=0LL;
   ll last=a;
  // cur=0
   ll mv=0;
   mv++;

   while(qu.size()>0)
   {
       ll cur=0;
       if(mv%2==0){
            while(qu.size()>0&&cur<=last){

          cur+=qu.front();
          a+=qu.front();
          qu.pop_front();
        }}
        else
        {
            while(qu.size()>0&&cur<=last){
                cur+=qu.back();b+=qu.back();
                qu.pop_back();
            }
        }
        mv++;
        last=cur;
}
   cout<<mv<<ss<<a<<ss<<b<<nn;



   }


    return 0;
}
