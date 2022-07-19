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
 O_O ;
   ll t;
   cin>>t;
   while(t--){
       // string x="2020";
        ll n;cin>>n;
   string s;cin>>s;
   ll ans=0;
   for(ll i=0;i<n;i++)
   {
        ans=0;
       if(s[i]=='2')
       {
         //  cerr<<"here"<<ss;
            ans=1;
           ll j=i+1;
           if(s[j]!='0')
           {
               while(s[j]!='0')
                j++;
                if(s[j]=='0'&&s[j+1]=='2'&&s[j+2]=='0'&&j+2==n-1)
                {
                    yes;ans=4;break;
                }
           }
           else if(s[i+1]=='0'&&i+1<n)
           {
               ans=2;
               ll k=i+1;
               if(s[k]!='2'&&k<n){
                    while(s[k]!='2'&&k+1<n)
                    k++;
                if(s[k]=='2'&&s[k+1]=='0'&&k+1==n-1)
                   {
                       yes;ans=4;break;
                   } }
                   else if(s[i+2]=='2'&&i+1<n)
                   {
                       ans=3;
                       ll x=i+2;
                       if(s[x]!='0')
                       {
                           while(s[x]!='0'&&x+1<n)
                            x++;
                           if(s[x]=='0'&&x==n-1)
                           {
                               yes;ans=4;break;
                           }
                       }
                       else if(s[i+3]=='0'&&x<n){
                        ans=4;yes;break;
                       }

                   }
           }


       }
   }
   if(ans!=4)
    no;



   }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D
/*****************  ALHAMDULILLAH  *****************/

