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
ll prime[1000000];
vll v;
vpll vp;

void sieve(){
   ll i,j,k=1;
   for(ll i=2;i<=1000000;i++)
   {

       if(prime[i])
       continue;
       v.pb(i);
       if(i-k==2)
        vp.pb(make_pair(k,i));
        k=i;
       for(j=2*i;j<=1000000;j+=i){
        prime[j]=1;

       }
   }
   for(ll x=i;x<=20000000;x++)
   {
       for(j=0;v[j]*v[j]<x;j++)
       {
           if(x%v[j]==0)
            break;
         if(i-k==2)
        vp.pb(make_pair(k,j));
        k=j;
       }
   }


}




int main()
{
 //O_O ;
 sieve();
   ll t;
   cin>>t;
  cout<< vp[t-1].first<<" "<<vp[t-1].second<<nn;





    return 0;
}
