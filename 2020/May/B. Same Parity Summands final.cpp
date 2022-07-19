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



int main()
{
 O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b;
        cin>>a>>b;
     if(a==b)
       {
            cout<<"YES"<<nn;
           for(ll i=1;i<=b;i++)
            cout<<1<<ss;
           cout<<nn;
           continue;

       }
     ll temp=b-1;
       ll temp2=a-temp;
       ll temp3=a-(2*(b-1));

    if(temp2%2==1&&temp2>0)
       {
            cout<<"YES"<<nn;
            cout<<temp2<<ss;
          for(ll i=1;i<b;i++)
          {
              cout<<1<<ss;

          }

          continue;
       }
       else if(temp3%2==0&&temp3>0)
       {


           cout<<"YES"<<nn;
           cout<<temp3<<ss;
           for(ll i=1;i<b;i++)
            cout<<2<<ss;
            continue;


       }
       else{
        cout<<"NO"<<nn;
        continue;
       }



   }






    return 0;
}

