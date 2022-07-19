

#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


int main()
{
 //O_O ;
   ll t,a[10000],temp;
   cin>>t;
   while(t--){
        ll n,sum=0;
      cin>>n;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
      sort(a,a+n);
  temp=sum-a[0];
  // cout<<temp<<nn<<sum<<nn;
   //
    if(sum>temp&&sum>0)
        cout<<"YES"<<nn;
    else
        cout<<"NO"<<nn;

   }


    return 0;
}

