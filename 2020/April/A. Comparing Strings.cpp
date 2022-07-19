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
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
         ll ar[100000]={0},br[10000]={0},p=0,c=0;
        string s,x;cin>>s>>x;ll l=s.length(),k=x.length();
        for(ll i=0;i<l;i++)
        {
            ll temp=s[i]-'a';
            ar[temp]++;
            ll temp2=x[i]-'a';
            br[temp2]++;
            if(temp!=temp2) c++;
        }
          for(ll i=0;i<l;i++)
        {

        }
        for(ll i=0;i<26;i++)
            if(ar[i]!=br[i])
            p=1;
if(p){
    cout<<"NO"<<nn;
    return 0;
    }
    if(l!=k)
        cout<<"NO"<<nn;
  else  if(c>2)
      cout<<"NO"<<nn;
else
    cout<<"YES"<<nn;





    return 0;
}
