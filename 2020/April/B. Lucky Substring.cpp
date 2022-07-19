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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
#define MAX 1000005


int main()
{
 //O_O ;
   string s;ll j=0,temp,temp2,x=0,c=0,d=0,y=0;
   cin>>s;
   if(s[j]==0)
    while(!s[j])
   {
       j++;
   }
   s.erase(0,j);
   ll l=s.length();
  // cout<<s<<nn;
   for(ll i=0;i<l;i++)
   {
       if(s[i]=='4'&&x==0){

           temp=i;x=1;c++;}
      else if(s[i]=='7'&&y==0){
           temp2=i,y=1,d++;}
      else if(s[i]=='4')
          c++;
    else if(s[i]=='7')
          d++;

   }
   cout<<c<<ss<<d<<nn;
   cout<<temp<<ss<< temp2<<nn;
   if(!c&&!d)
    cout<<-1<<nn;
   else if(c>d)
    cout<<4<<nn;
   else if(c<d)
    cout<<7<<nn;
   else if(c==d)
   {
       if(temp<temp2)
        cout<<4<<nn;
       else
        cout<<7<<nn;

   }



    return 0;
}
