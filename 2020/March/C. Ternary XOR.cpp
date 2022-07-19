
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
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n;
      cin>>n;
      string y;
      string x,z;      cin>>x;
      y[0]='1';
       z[0]='1';
     // cout<<x<<nn;
      //cout<<1;
    ll  temp=0;
      for(ll i=1;i<n;i++)
        {
            if(x[i]=='2'&&temp==0)
            {
                y[i]='1';
                z[i]='1';
                temp='1';
            }
             if(x[i]=='2'&&temp!=0)
            {
                y[i]='2';
                z[i]='0';

            }
            else if(x[i]=='1')
            {
                z[i]='1';
                y[i]='0';


            }
            else{
                z[i]='0';
                y[i]='0';


        }
        }
        for(ll i=0;i<n;i++)
            cout<<y[i];
        cout<<nn;
        for(ll i=0;i<n;i++)
            cout<<z[i];
        cout<<nn;



   }


    return 0;
}
