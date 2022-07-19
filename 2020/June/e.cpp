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
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
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
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll ar[MAX],br[MAX],cr[MAX];

int main()
{
 //O_O ;
   ll n,x;
   cin>>n>>x;
   ll j=0,k=0,l=0;
   for(ll i=1;i<=n;i++)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       if(b==1&&c==1)
      ar[++j]=a;

        else if(b==1&&c==0)
                br[++k]=a;
       else if(b==0&&c==1)
        cr[++l]=a;
   }
   ll temp=max(j,max(k,l));
   sort(ar,ar+j+1);
    sort(br,br+k+1);
     sort(cr,cr+l+1);
     if(l+j<x||j+k<x){
     cout<<-1<<nn;
     return 0;
     }
  //   for(ll i=1;i<=j;i++)

    //cout<<ar[i]<<"&"<<nn;
     //for(ll v:br) cout<<v<<"*"<<nn;
     //for(ll v:cr) cout<<v<<nn;
   ll a=1,b=1,c=1;
   ll ans=0;
while(x>0)
{
    if(a<=j&&b<=k&&c<=l){
   if(ar[a]>(br[b]+cr[c]))
   {
       ans+=(br[b]+cr[c]);
       b++,c++;

   }
  else
   {
       ans+=ar[a];
       a++;

   }
    }
    else if(a>j&&b<=k&&c<=l)
    {
        ans+=(br[b]+cr[c]);
        b++,c++;
    }
    else if(a<=j&&(b>k||c>l)){
        ans+=ar[a];
        a++;
    }

x--;
}
cout<<ans<<nn;



    return 0;
}
