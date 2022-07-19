
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
#define MAX 100005


int main()
{
 O_O ;
 ll n,g;
     while(cin>>n){
        cin>>g;
        ll count=0;
        ll ar[MAX];
        ll temp[MAX];
        ll ans=0;
       // for(ll i=1,j=0;i<=n;i++)
        ll j=0;
       while(n--)
        {

        ll a,b;
        cin>>a>>b;
        if(a<b){
            temp[j]=b-a;

           // cout<<temp[j]<<ss;
            j++;
            }
         else if(a==b){
            count++;
          //  cout<<count<<"in";
         }
         else
            ans+=3;



        }

    if(count)
    {
        if(count<=g){
        g=g-count;
        ans+=count*3;
        }
        else{
            ll temp3=count-g;
            ans+=(g*3);
            ans+=temp3;
        g=0;

        }}
      //  cout<<ans<<nn;//   cout<<j<<nn;
        sort(temp,temp+j);
   // for(ll i=1;i<j;i++)
     //   temp[i]+=temp[i-1];
   //  cout<<g<<nn;
      // for(ll i=0;i<j;i++)
        //    cout<<temp[i]<<ss;
        //cout<<nn;
        if(g)
        {
            for(ll i=0;i<j;i++)
            {
                if(temp[i]<g){
                    ans+=3;
                    g=g-temp[i]-1;
                   // cout<<g<<nn;
                }
                else if(temp[i]==g)
                {
                    ans+=1;
                    g=g-g;
                }
            }
   }
        cout<<ans<<nn;
}


    return 0;
}
