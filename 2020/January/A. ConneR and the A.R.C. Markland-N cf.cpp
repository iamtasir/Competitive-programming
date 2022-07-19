#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef       pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
int main()
{
O_O ;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,k,ans=LLONG_MAX,temp,a,ans1=LLONG_MAX,p,q;
        cin>>n>>s>>k;
        ll ar[n]= {0};
        for(ll i=1; i<=k; i++)
        {
            cin>>a;
            ar[a]=1;
            //cout<<ar[a]<<nn;
        }
        for(ll i=s; i<=s+k; i++)
        {
            if(ar[i]==0)
            {
                ans=i-s;
              //  p=1;
                //cout<<ans<<nn;
                break;
            }
        }
        temp=s-k;
        for(ll i=s; i>=temp; i--)
        {
            if(ar[i]==0)
            {
                ans1=s-i;
             //   q=1;
               // cout<<ans1<<nn;
                break;

            }


        }
        //if(p==1&&q==1)
            cout<< min(ans,ans1)<<nn;
        //else if(p==1)
         //   cout<<ans<<nn;
        //else if(q==1)
          //  cout<<ans1<<nn;
        ar[n]= {0};
    }
    return 0;
}
