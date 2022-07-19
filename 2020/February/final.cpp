
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

void print(std::vector<ll> const &ar)
{
	for (auto it = ar.cbegin(); it != ar.cend(); it++)
	{
		std::cout << *it << ' ';
	}
}
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        vll ar;
       ll b,ans=0,count=0,ans1=0,j,i,l;
       string s;

       cin>>b>>s;
       for( i=0,j=0;i<b;i++){
            ll temp;
         temp=s[i]-'0';
       //  cout<<temp<<nn;
       if(temp!=0&&temp%2!=0){
                ar[j]=temp;
              j++;
              ans=j;
         }
         else if(temp==0)
            count++;


       }
       l=ar.size();

       for( ll i=0;i<l;i++)
                ans1=ans1+ar[i];

      print(ar);


   // else
     //   cout<<"-1"<<nn;
  ar.clear();

   }


    return 0;
}
