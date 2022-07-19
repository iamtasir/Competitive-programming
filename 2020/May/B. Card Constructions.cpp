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

 for(ll i=1;i<(MAX-10);i++)
 {
     ll temp=(i-1)*3;
     ar[i]=temp+2;


 }
 ll t;cin>>t;
 while(t--){
 ll ans=0,temp;ll c=0;
 ll n;cin>>n;
 if(n==1)
 {
     cout<<0<<nn;
     return 0;
 }
 ll res=0;
 for(ll i=1;;i++)
 {
     ans+=ar[i];
     if(ans>n)
     {
         ans-=ar[i];
         res=n-ans;
         c++;
        temp=i;
        break;
     }
     else if(ans==n){
        cout<<1<<nn;
        return 0;
     }
}
//cout<<temp<<ss<<res<<nn;
while(res>1){
ll ans2=0;ll res3;
 for(ll i=1;;i++)
 {
     ans2+=ar[i];
     if(ans2>res)
     {
         ans2-=ar[i];
         res=res-ans2;
         c++;
        temp=i;
        break;
     }
     else if(ans2==n){
        cout<<c+1<<nn;
        return 0;
     }

} //cout<<temp<<ss<<res<<ss<<c<<"&"<<nn;
}
cout<<c<<nn;
 }







    return 0;
}
