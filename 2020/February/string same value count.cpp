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


int main()
{
 //O_O ;
  ll l,ar[10000]={0};
  string s;
  cin>>s;
  l=s.length();
  for(ll i=0;i<l;i++){
    for(ll j=i+1;j<l;j++){
        if(s[i]==s[j]&&s[j]!='-1'){
            ar[i]+=1;
            s[j]='-1';
        }

    }
  }
  for(ll i=0;i<l;i++){
    if(s[i]!='1')
    cout<<s[i]<<" "<<ar[i]+1<<nn;
  }

    return 0;
}
