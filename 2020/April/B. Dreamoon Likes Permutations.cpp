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
//#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005
ll ar[MAX]={0};
int main()
{
 //O_O ;
 set<ll>st;
map<ll,ll>mp;


   ll t;
   ll temp2,temp3,ma=0;
   cin>>t;
   while(t--){
        vector<ll>vec(100000);
        ll n,p=0;
     ll ma=0;
        cin>>n;
    for(ll i=1;i<=n;i++)
   {
       ll temp;cin>>temp;
       st.insert(temp);
       mp[temp]++;
       //ar[temp]++;
       vec[temp]++;
        ma=max(temp,ma);
       if(mp[temp]>2)
        p=1;

}
//for(ll i=1;i<n;i++)
  //cout<<ar[i]<<ss;
  //cout<<nn;
//cout<<ma<<nn;
ll s=st.size();ll x=0;
//cout<<s<<nn;
 if(s!=ma){
    cout<<0<<nn;
    continue;
 }
 if(p)
 {
     cout<<0<<nn;
     continue;
 }
 for(ll i=1;i<ma+100;i++)
 {
     if(vec[i]==1&&x<=0){
         temp2=i-1;x=1;
         // cout<<temp2<<nn;
     }

     else if(vec[i]==0){
         temp3=i-1;
        // cout<<temp3<<nn;
         break;
         }
 }

 if(temp2==1){
   cout<<2<<nn;
cout<<temp2<<ss<<temp3<<nn;
cout<<temp3<<ss<<temp2<<nn;
 }
 else{
    cout<<1<<nn;
    cout<<temp2<<ss<<temp3<<nn;
    }

mp.clear();
st.clear();
vec.clear();

   }


    return 0;
}
