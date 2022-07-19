

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

ll a[100500]={0};
string b[100500];
int main()
{
//O_O ;
    ll n,m,temp=0,temp2=0,temp3,w[10000]={0},ans=0;
    cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        cin>>temp3;
        //a[temp3];
        cin>>b[temp3];
       // cout<<a[temp3]<<nn;
        if(a[temp3]==0&&b[temp3]=="WA")
        {
            w[temp3]++;
        }

        else if(a[temp3]==0&&b[temp3]=="AC")
        {
            temp++;
            a[temp3]=1;
            ans=ans+w[temp3];
            // cout<<temp<<nn;
        }

    }

    cout<<temp<<" "<<ans<<nn;


    return 0;
}
