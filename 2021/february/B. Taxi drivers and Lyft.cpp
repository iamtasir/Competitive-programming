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


 ll ar[MAX],br[MAX],cr[MAX];
int main()
{
 //O_O ;
   ll n,m;
   cin>>n>>m;
   for(ll i=0;i<n+m;i++)cin>>ar[i];
   for(ll i=0;i<n+m;i++)cin>>br[i];
   ll x=0,j=0;
   if(br[0]==0)
   {
       while(br[j]==0&&j<n+m) cr[x]++,j++;
   }
 //  cout<<cr[0]<<nn;
   ll p=m;

   for(ll i=j;i<n+m;i++)
   {
       ll c=0;
       if(br[i]==0){

            c=1;i++;
        while(br[i]==0&&i<n+m)
            c++,i++;
//cout<<c<<nn;

       if(p>1)
       {
           cr[x]+=c/2;
           if(c&1)cr[x]++;
           x++;
           cr[x]+=c/2;
           p--;
       }
       else
       {
           cr[x]+=c;x++;


          // break;
       }
       }
       else if(br[i+1]==1&&i+1<m+n)
        ar[x]+=c,x++;
        else
            ar[x]+=c;

//cout<<x<<nn;

   }
   for(ll i=0;i<m;i++)
    cout<<cr[i]<<ss;cout<<nn;


    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/
