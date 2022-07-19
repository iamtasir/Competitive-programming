#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;


ll a[10000000];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
       ll b,c,d,ans=0;
       for(ll i=0;i<3;i++){
           cin>>a[i];
       }
       cin>>b;


       sort(a,a+3);
       ll temp=a[2]-a[0];
       ll temp2=a[2]-a[1];
       ll temp3=temp+temp2;
       ll temp4=b-temp3;


       if(temp4%3==0&&temp4>=0)
        cout<<"YES"<<nn;
       else
        cout<<"NO"<<nn;



   }



    return 0;
}
