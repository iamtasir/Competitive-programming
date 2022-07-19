
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
        ll i=1;
        int ar[100];
        int a,b,c,d,e,f,g;
        cin>>a>>b>>c>>d;
        cin>>ar[0]>>ar[1]>>ar[2];
       sort(ar,ar+3);
        dl e1=(ar[1]+ar[2])/2;

      dl ans=a+b+c+d+e1;
      cout<<ans<<nn;
      if(ans>=90)
        cout<<"Case"<<ss<<i<<":"<<ss<<"A"<<nn;
        else if(ans>=80&&ans!=90)
       cout<<"Case"<<ss<<i<<":"<<ss<<"B"<<nn;
        else if(ans>=70&&ans!=80)
         cout<<"Case"<<ss<<i<<":"<<ss<<"C"<<nn;
          else if(ans>=60&&ans!=70)
          cout<<"Case"<<ss<<i<<":"<<ss<<"D"<<nn;
         else
            cout<<"Case"<<ss<<i<<":"<<ss<<"F"<<nn;

 i++;
   }


    return 0;
}
