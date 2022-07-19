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


ll binarysearch(ll ar[],ll n,ll x){


  ll low=0;
  ll  high=n-1;
  while(low<=high){
    ll mid=low+(high-low)/2;
    if(x==ar[mid])
        return mid;
     //found x return (exit);
     else if(x<ar[mid])
        high=mid-1;
     else
        low=mid+1;

  }
  return -1;
}

int main()
{
 //O_O ;
ll ar[]={1,4,6,10,11,14,15};
ll x;
cin>>x;
ll index=binarysearch(ar,7,x);
if(index!=-1)
    cout<<x<<"is found"<<nn;
else
    cout<<"Not found"<<nn;

    return 0;
}
