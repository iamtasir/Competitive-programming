
#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,ans,cnt=0;
        string b;
       cin>>a>>b;
       for(ll i=0;i<zz(b);i++)
           if(b[i]=='9')
            cnt++;

    cnt=max(zz(b)-1,cnt);
    cout<<cnt*a<<nn;



   }


    return 0;
}
