
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
 O_O ;

   ll n,m,q;
   string a[1000],b[1000];

   cin>>n>>m;
   for(ll i=0;i<n;i++)
   {

        cin>>a[i];
   }
   for(ll i=0;i<m;i++)
   {

        cin>>b[i];

   }


    cin>>q;
    for(ll i=1;i<=q;i++)
    {
        ll c;

    cin>>c;
    ll temp=c%n;
    ll temp2=c%m;
  //  cout<<temp<<temp2<<nn;
  if(temp==0&&temp2==0)
  {
       cout<<a[n-1];
      cout<<b[m-1]<<nn;
  }
  else if(temp!=0&&temp2==0){
      cout<<a[temp-1];
         cout<<b[m-1]<<nn;

  }
  else  if(temp==0&&temp2!=0)
  {
           cout<<a[n-1];
           cout<<b[temp2-1]<<nn;
  }
  else if(temp!=0&&temp2!=0){
          cout<<a[temp-1];
  cout<<b[temp2-1]<<nn;
  }
  //else
    // cout<<b[temp-1]<<nn;

  }



    return 0;
}
