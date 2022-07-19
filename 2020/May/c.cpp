#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef          double      dl;
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
//result = sin (angle*PI/180);

//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007



int main()
{
 //O_O ;
 dl temp=360.0/12.0;
 dl temp2=360.0/60.0;
 dl a,b,c,d;
 cin>>a>>b>>c>>d;
 dl temp3=temp*c+d/2;
 dl temp4=temp2*d,ans=abs(temp3-temp4);
 dl ans9=abs(ans-360);
 //cout<<ans<<"*"<<nn;
 dl mi=min(ans9,ans);
 mi=mi*1.0;
// cout<<mi<<nn;
// cout<<temp3<<ss<<temp4<<"%"<<nn;
 dl ans2 = cos (mi*pi/180.0);
// cout<<ans2<<nn;
dl ans3=ans2*2*a*b;
//cout<<ans3<<nn;
//cout<<ans2<<nn;

dl ans4=sqrt(a*a+b*b-ans3);
//cout<<temp3<<ss<<temp4<<"*"<<ss<<mi<<nn;

 cout<<precision(10)<<ans4<<nn;




    return 0;
}
