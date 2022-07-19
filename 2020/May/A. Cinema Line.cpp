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
   ll n;
   cin>>n;ll a=0,p=0,b=0,c=0,q=0,x=0,z=0;
   for(ll i=0;i<n;i++){
    cin>>ar[i];
   }
   if(ar[0]==50||ar[0]==100){
    cout<<"NO"<<nn;
    return 0;
   }
 for(ll i=0;i<n;i++)
 {
     ll t;t=ar[i];
     if(t==25&&p==0)
     {
         a++;p=1;
     }
     else if(t==25&&p==1)
        a++;
     else if(t==50&&p==1&&q==0)
     {
         q=1;b++;a--;
         if(a<0)
         {
             z=1;
             break;
         }

     }
    else if(t==50&&p==1&&q==1){
          b++;
          a--;
           if(a<0)
         {
             z=1;
             break;
         }

    }
    else if(t==100&&a>0&&b>0)
    {
        a--;b--;
    }
    else if(t==100&&b==0&&a>2){
        a-=3;
          if(a<0)
         {
             z=1;
             break;
         }
    }

    else
        z=1;



 }
 if(z)
    cout<<"NO"<<nn;
 else
    cout<<"YES"<<nn;


    return 0;
}
