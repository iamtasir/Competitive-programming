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


int main()
{
 //O_O ;
   ll t,n,k,p=0;
   cin>>n>>k;
   string s1,s2,s3,s4;
 map<string,ll>mp;
 for(ll i=0;i<n;i++){
        string s;
    cin>>s;
    s2=s;
    reverse(all(s));
    if(s==s2)
    {
        ll l=s.length();
        if(l>p){
        s4=s2;
        //mp[s2]++;
        p=s4.length();
        continue;
        }
    }
    else if(mp[s]%2==1)
    {
        s1+=s2;
        s3+=s2;
        mp[s2]++;
        continue;
    }
    mp[s2]++;
    }
    reverse(all(s3));
    s1=s1+s4+s3;;
    ll ans=s1.length();
    cout<<ans<<nn;
    cout<<s1<<nn;

    return 0;
}
