///*    ***Bismillahir Rahmanir Rahim***   */
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
#define rep(i,b) for(ll i=0;i<(b);i++)
#define rep1(i,b) for(int i=1;i<=(b);i++)
//#define rep(s,e)         for(i=s;i<e;i+=1)
//#define rep(i,a,b) for(int i=(a);i<(b);i++)
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



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        string x="2020",x1="0202";
        ll n;cin>>n;
   string s;cin>>s;
  string s1=s;
  reverse(all(s));
  cerr<<s<<nn;
  ll ans=0;
  for(ll i=0;i<4;i++)
    if(s1[i]==x[i])
      ans++;
      cerr<<ans<<nn;
      ll ans2=0;
  for(ll i=0;i<4;i++)
    if(s[i]==x1[i])
      ans2++;
     //  cerr<<ans<<nn;
      ll ans3=0;
      for(ll i=0;i<2;i++)
        if(s1[i]==x[i]) ans3++;
     for(ll i=0;i<2;i++)
        if(s[i]==x1[i]) ans3++;
      if(ans==4||ans2==4||ans3==4){
        yes;continue;
      }
      if(s1[0]==x[0]&&s1[n-3]==x[1]&&s1[n-2]==x[2]&&s1[n-1]==x[3]){yes;continue;}
      if(s1[0]==x[0]&&s1[1]==x[1]&&s1[2]==x[2]&&s1[n-1]==x[3]){yes;continue;}

      no;



   }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D
/*****************  ALHAMDULILLAH  *****************/

