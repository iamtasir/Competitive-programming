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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
   ll r,c,a;
   cin>>r>>c>>a;

   if(a%r==0||a%c==0)
   {
        cout<<1<<nn;
       return 0;
   }
   else
   {

   for(ll i=1;i<r;i++)
   {
      ll  temp=c*i;
       if(temp<a)
       {
           ll temp3=a-temp;
           if(temp3%(r-i)==0&&temp3/(r-i)<c)
           {
               cout<<2<<nn;return 0;

           }
    }
       else{
           ll temp5=temp-a;
           if(temp5%i==0&&temp5/i<c){
               cout<<2<<nn;return 0;

        }
       }
}
for(ll i=1;i<c;i++)
{
   ll temp=r*i;
   if(temp<a)
   {
       ll temp3=a-temp;
       if(temp3%(c-i)==0&&temp3/(c-i)<r)
       {
           cout<<2<<nn;return 0;
       }
   }
   else
   {
       ll temp3=temp-a;
       if(temp3%i==0&&temp3/i<r)
       {
           cout<<2<<nn;return 0;
       }
   }
}

}

cout<<3<<nn;



    return 0;
}
