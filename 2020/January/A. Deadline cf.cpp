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
typedef	    double          dl;
typedef		vector<ll>      vll;


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
       dl ans,n,d,temp;
       int p=0;
        cin>>n>>d;
    if(n>=d)
      cout<<"YES"<<nn;
   else if(n<d) {
        for(dl i=1;i<=n;i++)
        {
            temp=(i*i)+i+d;
              //cout<<temp<<nn;
            ans=(temp/(i+1));
            //cout<<ans<<nn;
            if(ans<=n)
            {
                p=1;
                break;
            }
        }
  if(p==1)
    cout<<"YES"<<nn;
   else
    cout<<"NO"<<nn;



   }

   }


    return 0;
}
