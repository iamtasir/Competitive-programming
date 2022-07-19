
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


int main()
{
//O_O ;
    ll t,b[10000],c;
    string  a;
    cin>>t;
    while(t--)
    {
        ll ans=0,cnt=0;

        ll p=0;
        ll n;
        cin>>n;

            cin>>a;



        for(ll i=0; i<n; i++)
        {
            c=0;
            if(a[i]=='A')
            {
                while(a[i+1]=='P')
                    c++;
                i++;


            }


            ans=max(ans,c);

        }

        cout<<ans<<nn;

    }




    return 0;
}

