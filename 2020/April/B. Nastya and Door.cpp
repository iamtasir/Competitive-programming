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

ll ar[MAX];

int main()
{

 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n,k;cin>>n>>k;
   for(ll i=1;i<=n;i++)
    cin>>ar[i];ll ma=ar[1];ll c=0;
for(ll i=2;i<=n;i++)
{
    ll temp=max(ar[i],ma);
   // ma=temp;

    if(temp==ar[i])
    {
     //  cout<<temp<<"*"<<nn;
       ma=temp;

        if(temp>ar[i-1]&&temp>ar[i+1]){
            c++;
         //   cout<<c<<"#"<<nn;
}}
}
ll x=0;
for(ll i=2;i<=n;i++)
    if(ma==ar[i])
    x++;
    if(c==x)
       ll p=c+1;

if(ar[1]==ma)
    c++;

    cout<<c+1<<ss;
while(c--)
{
    ll temp=k%2;
    ll temp2=k/2;
    k=temp2+temp;
}
cout<<k<<nn;


   }


    return 0;
}
