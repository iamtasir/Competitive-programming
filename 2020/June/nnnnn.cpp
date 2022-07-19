#include<bits/stdc++.h>
using namespace std;
typedef        long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define        pb              push_back
#define        PB              pop_back
#define        nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define        all(p)          p.begin(),p.end()
#define        zz(v)           (ll)v.size()
#define        ss              ' '
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define        gcd(a,b)        __gcd(a,b)
#define        lcm(a,b)        (a*b)/gcd(a,b)
#define        pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef        vector<ll>      vll;
typedef        map<string,ll>      msl;
typedef        map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

int main(){
    int a,b,sum=0,x;
    cin>>a>>b;
    x=a+b;
    if(a%2==0){
        sum=sum+a;
        cout<<a<<" is even"<<nn;
    }
    if(a%2!=0){
        sum=sum-a;
        cout<<a<<" is odd"<<nn;
    }
    if(b>0){
        sum=sum+b;
        cout<<b<<" is greater than zero"<<nn;
    }
    if(b<0){
        sum=sum-b;
        cout<<b<<" is less than zero"<<nn;
    }
    if(b==0){
        sum=sum*b;
        cout<<b<<" is equal to zero"<<nn;
    }
    cout<<"after adding,a+b is equal to "<<x<<nn;
    if(x%2==0){
        sum=sum+a;
        sum=sum+b;
        cout<<"after adding "<<a<<" "<<b<<" sum is equal to "<<sum<<nn;
    }
    if(x%2!=0){
        sum=sum-a;
        sum=sum-b;
        cout<<"after removing "<<a<<" "<<b<<" sum is equal to "<<sum<<nn;
    }
    if(x==0){
        sum=sum*10;
        cout<<"the result after multiplying sum = "<<sum<<nn;
    }
    sum=sum*5;
    cout<<"THE ULTIMATE RESULT = "<<sum<<nn;
    cout<<"I wanna be a national contestant and I can write long code"<<nn;
    return 0;
}
