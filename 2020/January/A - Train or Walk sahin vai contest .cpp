#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;

int main ()
{
    ll t,n,a,b,c,d,p,q,y;
    cin>>t;
    while (t--)
    {
        cin>>n>>a>>b>>c>>d>>p>>q>>y;
        int ar[n+1];

        for (int i=1; i<=n; i++)
            cin>>ar[i];

        if(abs(ar[a]-ar[c])*p>y)
            cout<<abs(ar[a]-ar[b])*p<<nn;

        else
            cout<<(min(abs(ar[a]-ar[b])*p,y+abs(ar[c]-ar[d])*q+abs(ar[d]-ar[b])*p))<<nn;
    }
    return 0;
}
