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
   ll t;
   cin>>t;
   while(t--){
    ll a,temp,ans,ar[100000];
    cin>>a;
    if(a<6){
          if(a==2)
            cout<<1<<nn;
        else if(a==3)
            cout<<7<<nn;
            else if(a==4)
                cout<<11<<nn;
            else if(a==5)
                cout<<71<<nn;
        }

        else{
           temp=a%6;
           ans=a/6;
           for(ll i=0;i<ans;i++){
              ar[i]=9;

           }
           if(temp==2)
              ar[ans]=1;
            else if(a==3)
             ar[ans]=7;
            else if(a==4)
              ar[ans]=11;
            else if(a==5)
               ar[ans]=71;
           for(ll i=0;i<=ans;i++){
             cout<<ar[i];

           }
           cout<<nn;

        }



        }








    return 0;
}
