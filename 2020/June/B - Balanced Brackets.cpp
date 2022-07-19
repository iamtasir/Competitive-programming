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
#define MAX 10005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a[MAX]={0},b[MAX]={0},c[MAX]={0};
        string s;cin>>s;ll p=0;
        stack<ll>stk;
   ll n=s.length();
   for(ll i=0;i<n;i++)
   {
       if(s[i]=='(')
            a[i]=1;
       else if(s[i]==')')
           a[i]=-1;
       else if(s[i]=='{')
           b[i]=1;
           else if(s[i]=='}')
           b[i]=-1;
           else if(s[i]=='[')
           c[i]=1;
           else if(s[i]==']')
           c[i]=-1;

   }
   for(ll i=1;i<n;i++)
   {
       a[i]+=a[i-1];
       b[i]+=b[i-1];
       c[i]+=c[i-1];
   }
   for(ll i=0;i<n;i++)
   {
       if(a[i]<0){
            p=1;
        cout<<"NO"<<nn;
        break;
        }
        if(b[i]<0){
        p=1;
        cout<<"NO"<<nn;
        break;
        }
        if(c[i]<0){
        p=1;
        cout<<"NO"<<nn;
        break;
        }

   }
   if(p)
    continue;
   if(a[n-1]!=0||b[n-1]!=0||c[n-1]!=0){
    p=1;
    cout<<"NO"<<nn;
    continue;
   }
   for(ll i=0;i<n;i++)
   {
        if(s[i]=='(')
            stk.push(1);

       else if(s[i]=='{')
        stk.push(2);

       else if(s[i]=='[')
       stk.push(3);
      else if(s[i]==')')
        {
            if(stk.top()==1&&!stk.empty())
                stk.pop();
            else
                {

                p=1;
        cout<<"NO"<<nn;
        break;
        }
        }

        else if(s[i]=='}')
        {
            if(stk.top()==2&&!stk.empty())
                stk.pop();
            else
                {
                    p=1;
        cout<<"NO"<<nn;
        break;
        }

        }
       else  if(s[i]==']')
        {
            if(stk.top()==3&&!stk.empty())
                stk.pop();
            else{
                p=1;
        cout<<"NO"<<nn;
        break;
        }
        }



    }

    if(p)
    continue;

    else
   cout<<"YES"<<nn;


   }


    return 0;
}
