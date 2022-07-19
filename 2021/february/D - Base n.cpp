///*    ***Bismillahir Rahmanir Rahim***   */
///https://www.geeksforgeeks.org/passing-vector-function-cpp/
///https://www.geeksforgeeks.org/convert-base-decimal-vice-versa/
///https://atcoder.jp/contests/abc192/submissions/20320867
///http://www.cplusplus.com/reference/string/stoi/
///https://www.youtube.com/watch?v=xiF6MWZ5K0k&ab_channel=AnujBhaiya

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
//ll minelementindex = min_element(v.begin(),v.end()) - v.begin();
//ll minelement = *min_element(v.begin(), v.end());
//ll maxelementindex = max_element(v.begin(),v.end()) - v.begin();
//ll maxelement = *max_element(v.begin(), v.end());
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007
bool cheak(vector <ll>v,ll base,ll m){

ll power=1;
reverse(all(v));
ll f=1;
ll cur=0;
for(ll x:v){
    if(f)
    {
        if(power<=double(m-cur)/x)
        {
            cur+=x*power;

        }
        else return false;
        f=0;

    }
    else if(power<=double(m)/base)
    {
        power*=base;
        if(power<=double(m-cur)/x)
            cur+=power*x;
        else return false ;
    }
    else return false;

}
 return true;



}



int main()
{
 //O_O ;
 string s;cin>>s;
 ll m;cin>>m;
 if(s.length()==1){
    ll x=stoi(s);
    if(x<=m) cout<<1<<nn;
    else cout<<0<<nn;
    return 0;
}
vector<ll>v;
for(ll i=0;i<s.length();i++)
    v.pb(s[i]-'0');
    //cout<<v[i]<<nn;
ll lo=*max_element(all(v));
//cout<<lo<<nn;
ll x=lo;lo++;
ll high=1e18;
ll ans=0;
while(lo<=high)
{
ll    mid=(high+lo)/2;
    if(cheak(v,mid,m))
    {
        ans=mid-x;
        lo=mid+1;
    }
    else high=mid-1;



}
cout<<ans<<nn;





    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/

