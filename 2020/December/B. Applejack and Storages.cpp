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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep2(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
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
#define     print(v)        for(ll i:v) cout<<i<<ss
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first != b.first) return a.first > b.first;
    else
    return a.second > b.second;
}
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll ar[MAX];

int main()
{
 //O_O ;
     map<ll,ll>mp;
        ll n;cin>>n;
     for(ll i=1;i<=n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
     }
     multiset<pair<ll,ll>>st;
  for (auto it = mp.begin(); it != mp.end(); ++it){
       ll x=it->second;
       st.insert({x,it->first});


  }
  st.insert({0,0});st.insert({0,-1});st.insert({0,-2});
  ll q;cin>>q;
  for(ll i=0;i<q;i++){
        char ch;cin>>ch;
     ll x;cin>>x;
     ll past=mp[x];
     if(ch=='+')
        mp[x]++;
     else
        mp[x]--;
     ll present=mp[x];
     st.erase({past,x});
     st.insert({present,x});

    auto it=st.rbegin();
    ll a=it->ff;
    it++;
  ll  b=it->ff;it++;
    ll c=it->ff;
    cout<<"a="<<a<<ss<<"b="<<b<<ss<<"c="<<c<<nn;
    if(a>7)
        yes;
    else
    {
        if(a>5&&b>1)
          yes;
      else if(a>3&&b>1&&c>1)
          yes;
        else if(a>3&&b>3) yes;
        else
            no;

    }





  }





    return 0;
}
