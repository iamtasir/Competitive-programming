#include<bits/stdc++.h>
using namespace std;
typedef        int      ll;
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



int main()
{
 //O_O ;
   ll t,cnt=0;
   cin>>t;
   while(t--){
        map<string,ll>mp;
        ll x;cin>>x;
   while(x--)
   {
       string s;cin>>s;
       if(s.length()>1)
       sort(s.begin()+1,s.end()-1);
       mp[s]++;

   }
 //  cout<<"Case "<<++cnt<<":"<<nn;

   ll w;cin>>w;
  // getchar();
  cin.ignore();
  ll i=0;
   while(w--)
   {

       string z;
       ll ans=1;
       getline(cin,z);
       stringstream snew(z);
       string temp;
       while(snew>>temp)
       {
           if(temp.length()>1)
            sort(temp.begin()+1,temp.end()-1);
           ans*=mp[temp];
       }
      if(i=0)
        cout<<"Case "<<++cnt<<":"<<nn,i=1;

       cout<<ans<<nn;


   }



   }


    return 0;
}
