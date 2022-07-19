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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
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
#define	       ff               first
#define	       sc              second
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
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll p,f,cnts,cntw,s,w;
   cin>>p>>f>>cnts>>cntw>>s>>w;

   ll temp=min(s,w);
   ll temp2=max(s,w);
   ll ans=0;
   if(temp==s)
   {
       cout<<"temp"<<temp<<nn;
       ll temp3=p/s,temp4=p%s;
       if(cnts>temp3)
       {

       ans+=temp3;
       cnts-=temp3;
      p-=(temp3*s);
      ll temp5=p/w, temp6=f/w;
      ans+=min(temp5+temp6,cntw);
    }
else
       {
           ans+=cnts;
           temp3-=cnts;
           p=(temp3*s)+temp4;
           ll temp5=p/w,temp6=f/w;
           ans+=min(temp5+temp6,cntw);
  }



   }
   else
   {
       cout<<"TEMP"<<temp<<nn;
        ll temp3=p/w,temp4=p%w;
        cout<<"P"<<ss<<temp3<<nn;
       if(cntw>temp3)
       {
           cout<<"temp3"<<ss<<temp3<<ss<<nn;

       ans+=temp3;
       cntw-=temp3;
      p-=(temp3*w);
      ll temp5=p/s, temp6=f/s;
      cout<<"TESMP6"<<temp6<<nn;
      ans+=min(temp5+temp6,cnts);
    }
else
       {
           ans+=cnts;
           temp3-=cnts;
           p=(temp3*w)+temp4;
           ll temp5=p/s,temp6=f/s;
           ans+=min(temp5+temp6,cntw);
  }

   }
   cout<<ans<<nn;



   }


    return 0;
}
