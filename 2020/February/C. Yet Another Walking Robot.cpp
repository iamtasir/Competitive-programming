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
        ll a,p=0,q=0,count=0,i;
   string s;
   cin>>a;
   cin>>s;
   for(ll i=0;i<a;i++)
   {
       if(i==0&&(s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
         s[i]='0';

      else if(i==0&&(s[i]=='U'&&s[i+1]=='P')||(s[i]=='P'&&s[i+1]=='U'))
      s[i]='0';
      else if(s[i]=='L'&&(s[i+1]=='R'||s[i-1]=='R'))
              s[i]='0';

      else if(s[i]=='R'&&(s[i+1]=='L'||s[i-1]=='L'))
              s[i]=0;
    else if(s[i]=='U'&&(s[i+1]=='D'||s[i-1]=='D'))
              s[i]='0';

   else if(s[i]=='D'&&(s[i+1]=='U'||s[i-1]=='U'))
              s[i]='0';

     else    if(i==a-1&&(s[i]=='L'&&s[i-1]=='R')||(s[i]=='R'&&s[i-1]=='L'))
         s[i]='0';
    else if(i==a-1&&(s[i]=='U'&&s[i-1]=='D')||(s[i]=='P'&&s[i-1]=='U'))
        s[i]='0';



   }
  // cout<<s<<nn;

   for(i=0;i<a;i++){
       if(s[i]=='0'){
        p=i+1;
     //   cout<<p<<nn;
       break;
       }

   }
   if(p!=0){
     for(ll j=i+1;j<a;j++){
       if(s[j]=='0'){
        q=j+1;
      //  cout<<q<<nn;
       break;
       }
     }
   }

   if(p!=0&&q!=0)
    cout<<p<<" "<<q<<nn;
   else
    cout<<-1<<nn;



   }


    return 0;
}
