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
#define MAX 1000005
 ll primeFactors(int n,map<ll,ll>mp)
{

    while (n%2 == 0)
    {
       // printf("%d ", 2);

       mp[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            mp[i]++;
           // printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
       // printf ("%d ", n);
    ll l=mp.size();
    return l;
}

int main()
{
 //O_O ;
   ll n;
  // cin>>n;
   while(cin>>n){
        if(n==0)
        break;
   else
   {
       map<ll,ll>mp;
      ll x= primeFactors(n,mp);
       cout<<n<<ss<<":"<<ss<<x<<nn;
   }



   }


    return 0;
}
