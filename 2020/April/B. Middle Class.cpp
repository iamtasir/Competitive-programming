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
//sort(a,a+n,greater<ll>())
#define MAX 1000005

ll ar[MAX]={0},br[MAX]={0};
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){

        ll n,x;cin>>n>>x;ll j=0,k=0;ll ans=0;
   for(ll i=0;i<n;i++)
   {
       ll a;cin>>a;
       if(a>=x){
        ll temp=a-x;
        ar[j++]=temp;
        ans++;
       }
       else
       {
           ll temp2=x-a;
           br[k++]=temp2;
       }
   }
//cout<<"ans"<<ans<<nn;
   sort(ar,ar+j);
   sort(br,br+k);
 //  cout<<"value j"<<j<<ss<<k<<nn;
//   for(l)
   ll count=0,sum=0;
  for(ll i=0;i<j;i++)
    sum+=ar[i];
  //  cout<<"sum"<<ss<<sum<<nn;
 for(ll i=1;i<k;i++)
    br[i]=br[i]+br[i-1];
 for(ll i=0;i<k;i++){
    if(sum>=br[i]){
       ans++;
//cout<<"SUM"<<sum<<nn;
      // sum=sum-br[i];
      // count++;

 }
 }
//if(j==0)
 //cout<<j<<nn;
//else
   cout<<ans<<nn;

   }


    return 0;
}
