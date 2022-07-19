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

void printPair(ll g, ll l)
{
    int n = g * l;

    // iterate over all factor pairs
    for (ll i = 1; i * i <= n; i++) {

        // check if a factor
        if (n % i == 0) {
            ll first = i;
            ll second = n / i;

            // find gcd
            ll gcd = __gcd(first, second);

            // check if gcd is same as given g
            // and lcm is same as lcm l
            if (gcd == g && l % first == 0 && l % second == 0) {
                cout << first << " " << second;
                return;
            }
        }
    }
}

// Driver Code
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n;
     cin>>n;
     for(ll i=1;i<n;i++)
     {
         ll l=n-i,g=i;
         if(l%g==0){
        printPair(g, l);
        cout<<nn;
        //if()
         }
     }

//   ll g = 3, l = 12;


   }


    return 0;
}

