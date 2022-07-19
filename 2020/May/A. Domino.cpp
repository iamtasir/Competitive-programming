
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

ll ar[MAX],br[MAX];

int main()
{
 //O_O ;
   ll n,sum=0,sum2=0,c=0,o=0,o1=0,e1=0,e=0,d=0;
   cin>>n;
   for(ll i=0;i<n;i++,c++)
   {
       cin>>ar[i]>>br[i];
       if(ar[i]&1)
        o++;
       else
        e++;
       if(br[i]&1)
        o1++;
       else
        e1++;
       sum+=ar[i],sum2+=br[i];
       if(ar[i]%2!=br[i]%2) d++;
    //cout<<1<<nn;

   }
  // if(o%2!=0&&o1%2!=0&&o>0&&o1>0){
    //cout<<1<<nn;
    //return 0;
//}

   //cout<<sum<<ss<<sum2<<"*"<<nn;
   cout<<d<<nn;
   if(sum%2!=0&&sum2%2!=0&&n>1&&(e>=1||e1>=1)&&(d>0&&d%2==0))
        cout<<1<<nn;

    else if(sum%2==0&&sum2%2==0)
    cout<<0<<nn;
  else  if(sum%2!=0&&sum2%2==0&&c>0)
   cout<<-1<<nn;
   else if(sum%2==0&&sum2%2!=0&&c>0)
    cout<<-1<<nn;


        else
            cout<<-1<<nn;




    return 0;
}
