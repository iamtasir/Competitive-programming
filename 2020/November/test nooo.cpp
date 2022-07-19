#include<bits/stdc++.h>
using namespace std;
typedef       long long int    ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;

ll q_and(ll i,ll j)
{
    cout<<"AND "<<i<<ss<<j<<nn;
    cout.flush();
    ll num;
    cin>>num;
    return num;
}

ll q_xor(ll i,ll j)
{
    cout<<"XOR "<<i<<ss<<j<<nn;
    cout.flush();
    ll num;
    cin>>num;
    return num;
}
ll q_or(ll i,ll j)
{
    cout<<"OR "<<i<<ss<<j<<nn;
    cout.flush();
    ll num;
    cin>>num;
    return num;
}



int main()
{

    ll n;
    cin>>n;
    ll ans[n+10];

    ll x12=q_xor(1,2);
    ll a12=q_and(1,2);

   // cout<<x12<<ss<<a12<<nn;

    ll x13=q_xor(1,3);
    ll a13=q_and(1,3);
   // cout<<x13<<ss<<a13<<nn;

    ll x23=(x12^x13);
    ll a23=q_and(2,3);
   // cout<<x23<<ss<<a23<<nn;

    ll a=x12+(2*a12);
    ll b=x13+(2*a13);
    ll c=x23+(2*a23);



    ll x,y,z;
    x=((a)+(b-c))/2;
    y=a-x;
    z=c-y;
    ans[1]=x;
    ans[2]=y;
    ans[3]=z;

    for(ll i=4; i<=n; i++)
    {
        ll xx=q_xor(i,1);
        ans[i]=(xx^ans[1]);
    }

    cout<<"! ";

    for(ll i=1; i<=n; i++)
    {
        cout<<ans[i]<<ss;
    }
    cout<<nn;
    cout.flush();










}
