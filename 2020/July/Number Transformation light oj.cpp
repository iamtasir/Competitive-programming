#include<bits/stdc++.h>
using namespace std;
typedef		int       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define	       memset(a,b)         memset(a,(b),sizeof(a))
#define	       clr(p)           memset(p,0,sizeof(p))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
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
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

bool isprimes[1005];
vector<ll>factorize;
void sieve()
{
    memset(isprimes,true);
    isprimes[0]=false,isprimes[1]=false;
    for(ll i=4;i<=1000;i+=2) isprimes[i]=false;
    for(ll i=3;i*i<=1000;i+=2){
            if(isprimes[i])
        for(ll j=i*i;j<=1000;j+=2*i) isprimes[j]=false;
    }
    for(ll i=2;i<=1000;i++)
    if(isprimes[i])
        factorize.pb(i);


}
ll vis[1010];
ll bfs(ll s,ll t)
{
    for(ll i=0;i<=t;i++) vis[i]=0;
    queue<pll>q;
    q.push({s,0}),vis[s]=1;
    while(!q.empty())
    {
        ll u=q.front().ff;
        ll c=q.front().sc;
        q.pop();
        if(u==t) return c;
        for(ll i=0;i<factorize.size()&&factorize[i]<u;i++)
        {
            if(u%factorize[i]!=0) continue;
            if(u+factorize[i]>t||vis[u+factorize[i]]) continue;
            q.push({u+factorize[i],c+1});
            vis[u+factorize[i]]=1;
        }
    }
    return -1;
}


int main()
{
// O_O ;
 sieve();
   ll Test;
   cin>>Test;
   ll i=1;
   while(Test--){
        ll s,t;
        cin>>s>>t;

    cout<<"Case "<<i++<<": "<<bfs(s,t)<<nn;




   }


    return 0;
}
