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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
#define MAX 1000005


int main()
{
 //O_O ;
 string q;
   ll k,a,b,x,y;ll e=0,w=0,s=0,n=0;
   cin>>k>>a>>b>>x>>y;
   if(x>a)  e=x-a;
   else
      w=a-x;
   if(y>b)  n=y-b;
   else
     s=b-y; cin>>q;
   for(ll i=0;i<k;i++)
   {
       if(q[i]=='E') e--;
       else if(q[i]=='W') w--;
       else if(q[i]=='N') n--;
        else
           s--;
       if(e<=0&&w<=0&&n<=0&&s<=0){
            cout<<i+1<<nn;
            return 0;}

   }
   cout<<-1<<nn;



    return 0;
}
