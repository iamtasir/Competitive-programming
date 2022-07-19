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
typedef      vector< pair <ll, ll>>      vpll;
typedef		vector<ll>      vll;


int main()
{
//O_O ;
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        map<ll,ll>mp1;
        vll a;
        vll b;
        ll m,n,cnt=0,cnt1=0,num=0,num1=0,flag=0,flag1=0;
        cin>>m>>n;
        for(ll i=0; i<m; i++)
        {
            ll x;
            cin>>x;
            a.pb(x);
            mp[x]++;

        }
        for(ll i=0; i<m; i++)
        {
            ll x;
            cin>>x;
            b.pb(x);
            mp1[x]++;

        }
        for(ll i=0; i<m; i++)
        {
            if(mp1[a[i]]==0)
            {
                cnt++;
                num=a[i];
            }
            else if(mp[a[i]]!=mp1[a[i]])
            {
                flag=abs(mp[a[i]]-mp1[a[i]]);
                num=a[i];
            }


        }
        for(ll i=0; i<m; i++)
        {
            if(mp1[b[i]]==0)
            {
                cnt1++;
                num1=b[i];
            }
            else if(mp[b[i]]!=mp1[b[i]])
            {
                flag1++;
                num1=b[i];
            }
        }



// cout<<num<<nn<<num1<<nn;
        if(cnt>1||cnt1>1||abs(num1-num)>n||flag>1)
            cout<<"NO"<<nn;
        else
            cout<<"YES"<<nn;

    }







    return 0;
}
