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
   while(t--){
      ll  ar[10000],ar2[10000],ar3[10000],count=0;
        string a,b,c;
         cin>>a>>b>>c;
         ll s=a.length();
         for(ll i=0;i<s;i++)
            ar[i]=a[i]-'0';
   sort(ar,ar+s);
            for(ll i=0;i<s;i++)
            ar2[i]=b[i]-'0';
             sort(ar2,ar2+s);
          for(ll i=0;i<s;i++)
            ar3[i]=c[i]-'0';
            sort(ar3,ar3+s);
    if(s%2==0)
    {
        for(ll i=0;i<s;i++)
        {
            if(ar[i]==ar2[i]&&ar2[i]==ar[3])
                count++;
        }
    }
    if(count==s)
        cout<<"YES"<<nn;
    else
        cout<<"NO"<<nn;



   }


    return 0;
}
