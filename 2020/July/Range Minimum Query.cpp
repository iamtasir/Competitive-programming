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
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))

#define	       ff               first
#define	       sc             second
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
#define MAX 100005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007
#define k    20
ll rmq[MAX][k];
ll lg[MAX];
int main()
{
 //O_O ;
 ll n;
 cin>>n;
    for(ll i=2;i<=n;i++){
           // cout<<lg[i/2]<<nn;
        lg[i]=lg[i/2]+1;
        cout<<lg[i]<<ss;
    }

    for(ll i=0;i<n;i++)
        cin>>rmq[i][0];


        for(ll j=1;j<=k;j++)
        {
            for(ll i=0;i+(1<<j)<=n;i++)
                rmq[i][j]=min(rmq[i][j-1],rmq[i+(1<<(j-1))][j-1]);
        }

   ll t;
   cin>>t;
   while(t--){
      ll l,r;cin>>l>>r;
      ll len=abs(r-l+1);
     ll j=lg[len];
     cout<<min(rmq[l][j],rmq[r-(1<<j)+1][j])<<nn;

   }


    return 0;
}
