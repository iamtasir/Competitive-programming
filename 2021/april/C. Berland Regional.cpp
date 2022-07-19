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
#define precision(a) fixed << setprecision(a)
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
//auto s =to_string(42);
//string s = "12345";
// object from the class stringstream
//stringstream geek(s);
// The object has the value 12345 and stream
// it to the integer x
//int x = 0;
//geek >> x;
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

ll ar[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        map<ll,ll>mp;
        ll n;cin>>n;
        ll ma=0;
        map<ll,vector<ll> >mp2;
   for(ll i=0;i<n;i++){
        cin>>ar[i];
    ma=max(ar[i],ma);
   mp[ar[i]]=1;

    }

 //   cout<<ma<<nn;
    ll sum=0;
    ll si=0;
    vector<ll>v[ma+1];

   for(ll i=0;i<n;i++){
       ll x;cin>>x;
       v[ar[i]].pb(x);
       sum+=x;
       mp2[ar[i]].pb(x);
}
for(ll i=1;i<=ma;i++)
{
   // cout<<si<<nn;
    if(mp[i]!=1) continue;
     ll q2=v[i].size();
       si=max(si,q2);

}
for (auto it = mp2.begin(); it != mp2.end(); ++it){
    vector<ll>vec;
    vec=it->second;
    ll c=it->first;
    sort(all(vec));
    ll sum2=0;
    mp2[c].clear();
    for(ll j=0;j<vec.size();j++)
{
    sum2+=vec[j];
    mp2[c].pb(sum2);
}




}

//cout<<si<<nn;
//cout<<sum<<nn;

//for(ll i=1;i<=ma;i++){
//        vector<ll>vec;
//vec=v[i];
//sort(all(vec));
//ll sum2=0;
//v[i].clear();
//for(ll j=0;j<vec.size();j++)
//{
//    sum2+=vec[j];
//    v[i].pb(sum2);
//
//}
//}
//for(ll i=1;i<=ma;i++){
//    for(ll j=0;j<v[i].size();j++)
//        cout<<v[i][j]<<ss;
//    cout<<nn;
//
//}
//for(ll j=0;j<v[i].size();j++)
//{
//    cout<<v[i][j]<<ss;
//
//}
//cout<<si<<nn;

ll ans[n+1]={0};
ans[1]=sum;
for(ll i=2;i<=si;i++)
{


    ll sum3=0;
   for (auto it = mp2.begin(); it != mp2.end(); ++it){
        vector<ll>v2;
   v2=it->second;
ll   c=it->first;
        ll w=v2.size();

        ll a=w%i;
        if(a>0)
        {
            sum3+=(v2[w-1]-v2[a-1]);

        }
        else
            sum3+=v2[w-1];


    }
    ans[i]=sum3;


}
for(ll i=1;i<=n;i++)
cout<<ans[i]<<ss;cout<<nn;








   }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/
