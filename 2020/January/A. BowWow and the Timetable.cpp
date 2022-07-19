
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
 ll cnt=0,ans;
  string a;
  cin>>a;
  ll l=a.length();
  for(ll i=0;i<l;i++)
  {
      if(a[i]=='1')
        cnt++;
  }
  if(cnt>1)
    ans=(l+1)/2;
 //   else if(l=1)
  else
    ans=l/2;

  cout<<ans<<nn;


    return 0;
}
