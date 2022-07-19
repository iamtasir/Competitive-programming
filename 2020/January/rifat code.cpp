#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define         O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,cnt=0;
      string m;
      cin>>n>>m;
      for(int i=0;i<zz(m);i++) if(m[i]=='9') cnt++;
      cnt=max(zz(m)-1,cnt);
      cout<<cnt*n<<nn;


    }
    return 0;
}
