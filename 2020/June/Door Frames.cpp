#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
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
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 //O_O ;
   ll n,a,b;
   cin>>n>>a>>b;
   if(a>=b){
ll temp=n/a;

if(temp==1)
{
    ll ans=4;
     temp=n-a;
     temp=temp/b;
    // cout<<temp<<nn;
    if(temp>=1)
    {
        cout<<ans<<nn;
        return 0;
    }
    if(temp==0)
    {
        ll temp2=n/b;
        if(temp2>=2)
        {
            cout<<ans+1<<nn;
        }
        else
            cout<<ans+2<<nn;
    }

}
else if(temp==2)
{
    ll ans=2;
    temp=n-2*a;
     temp/=b;
    if(temp>=1)
    {
        cout<<ans<<nn;
        return 0;
    }
    if(!temp)
    {
        ll temp2=n/b;
        if(temp2>=2)
        {
            cout<<ans+1<<nn;
        }
        else
            cout<<ans+2<<nn;
    }

}
else if(temp==3)
{
    ll ans=2;
    temp=n-a;
     temp/=b;
    if(temp==1)
    {
        cout<<ans+1<<nn;
        return 0;
    }
    else if(temp>=2)
    {
        cout<<ans<<nn;
        return 0;
    }

    if(!temp)
    {
        ll temp2=n/b;
        if(temp2>=2)
        {
            cout<<ans+1<<nn;
        }
        else
            cout<<ans+2<<nn;
    }

}
else if(temp>=4)
{
    ll ans=1;
    temp=n-4*a;
     temp/=b;
    // cout<<temp<<"*"<<nn;
    if(temp==1)
    {
        cout<<ans+1<<nn;
        return 0;
    }
    if(temp>=2)
    {
        cout<<ans<<nn;
        return 0;
    }
    if(!temp)
    {
        ll temp2=n/b;

        if(temp2>=2)
        {
            cout<<ans+1<<nn;
        }
        else
            cout<<ans+2<<nn;
    }

}
   }
   // startkefmklncvk'mlv'
   else
   {
      ll temp=n/b;

if(temp==1)
{

    ll ans=2;
     temp=n-b;
     temp=temp/a;
    // cout<<temp<<nn;
    if(temp>=2)
    {
        cout<<ans<<nn;
        return 0;
    }
    else if(temp==1)
    {
        ll temp2=n/a;
        if(temp2>=2)
            cout<<ans+1<<nn;
        else
            cout<<ans+2<<nn;

    }

   else  if(temp==0)
    {

        ll temp2=n/a;
      //  cout<<temp2<<"*"<<nn;
        if(temp2>=4)
        {
            cout<<ans+1<<nn;
        }
    else  if(temp2==3)
       {
    cout<<ans+2<<nn;

       }
       else if(temp2==2)
        cout<<ans+2<<nn;
       else if(temp2==1)
        cout<<ans+4<<nn;


    }


}
else if(temp>=2)
{
    ll ans=1;
    temp=n-2*b;
    temp/=a;
    if(temp>=4)
        cout<<ans<<nn;

  else  if(temp==3)
        cout<<ans+1<<nn;

    else if(temp==2)
        cout<<ans+1<<nn;
   else  if(temp==1)
    {
        ll temp2=n/a;
        if(temp2>=2)
            cout<<ans+1<<nn;
       else if(temp2==1)
            cout<<ans+2<<nn;
    }
    else if(!temp)
    {
        ll temp2=n/a;
        if(temp2>=4)
            cout<<ans+1<<nn;
        else if(temp2==3)
            cout<<ans+2<<nn;
        else if(temp2==2)
            cout<<ans+2<<nn;
        else if(temp2==1)
            cout<<ans+4<<nn;

    }


}



   }



    return 0;
}
