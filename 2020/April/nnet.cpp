#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define		pb              push_back
#define		PB              pop_back
//#define     eb              emplace_back
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
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 100005
#define mod 1000000007
int main()
{
    ll a,b,c,n;
     vector<pair<ll,ll>> v;
       cin >> n;
   for(int i = 1; i <= n;i++){
			cin >> a >> b;
			v.pb({a,b});
		}
      c = 0;
		ll count =INT_MIN;
		for(ll i =0; i < n-1;i++){
                ll h=v[i].first,x=v[i].second;

			if(h-x > count){
              c++;
				count = h;
			}
			else if(h+x < v[i+1].first){
			    c++;
				count = h+x;
			}
			else
				count = h;

		}
		cout << c+1 << endl;
v.clear();



	return 0;
}
