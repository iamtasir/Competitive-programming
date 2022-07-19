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
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define MAX 100005
int main()
{
 O_O ;
 ll p=0;
   string a,b;
   cin>>a>>b;
   ll i=0,j=0;
   if(a[i]=='0'){
     while(a[i]=='0')
           {

               i++;
           }
    a.erase(0,i);
   }

     if(b[j]=='0'){
     while(b[j]=='0')
           {

               j++;
           }
    b.erase(0,j);
   }
  ll l=a.length(),l2=b.length();
  // cout<<l<<nn;
  if(l>l2)
    cout<<">"<<nn;
  else if(l<l2)
    cout<<"<"<<nn;
else if(l==0&&l2==0)
    cout<<"="<<nn;

  else
  {
   reverse(a.begin(),a.end());
   reverse(b.begin(),b.end());

   for(ll i=l;i>=0;i--)
   {
       if(a[i]<b[i])
       {
           cout<<"<"<<nn;
           p=-1;
           break;
       }
       else if(a[i]>b[i])
       {
           cout<<">"<<nn;
           p=-1;
           break;

       }
       else if(a[i]==b[i])
        p++;
   }
   if(p>0)
    cout<<"="<<nn;
  }
 // cout<<a<<nn;
 // cout<<b<<nn;

    return 0;
}
