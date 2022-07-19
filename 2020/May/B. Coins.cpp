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
#define mod 1000000007



int main()
{
 //O_O ;
ll     ar[100]={0};
   string s1,s2,s3;cin>>s1>>s2>>s3;
   if(s1=="A<B"||s1=="B>A"||s2=="A<B"||s2=="B>A"||s3=="A<B"||s3=="B>A"){
    ar[1]+=2;
    ar[0]+=1;
   }
    if(s1=="A>B"||s1=="B<A"||s2=="A>B"||s2=="B<A"||s3=="A>B"||s3=="B<A")
 {
     ar[0]+=2;
     ar[1]+=1;
 }
     if(s1=="C>B"||s1=="B<C"||s2=="C>B"||s2=="B<C"||s3=="C>B"||s3=="B<C")
 {
     ar[2]+=2;
     ar[1]+=1;
 }
      if(s1=="C<B"||s1=="B>C"||s2=="C<B"||s2=="B>C"||s3=="C<B"||s3=="B>C")
 {
     ar[2]+=1;
     ar[1]+=2;
 }
      if(s1=="C>A"||s1=="A<C"||s2=="C>A"||s2=="A<C"||s3=="C>A"||s3=="A<C")
 {
     ar[2]+=2;
     ar[0]+=1;
 }
       if(s1=="C<A"||s1=="A>C"||s2=="C<A"||s2=="A>C"||s3=="C<A"||s3=="A>C")
 {
     ar[2]+=1;
     ar[0]+=2;
 }
 cout<<ar[0]<<ss<<ar[1]<<ss<<ar[2]<<nn;
 ll mi=min(ar[0],min(ar[1],ar[2]));
 if(ar[0]==ar[1]||ar[1]==ar[2]||ar[0]==ar[2]){
    cout<<"Impossible"<<nn;
    return 0;
 }
 if(ar[0]==mi)
 {
     cout<<"A";
     mi=min(ar[1],ar[2]);
     if(mi==ar[1])
     {
         cout<<"B"<<"C"<<nn;
     }
     else
        cout<<"C"<<"B"<<nn;

 }
 else if(ar[1]==mi)
 {
     cout<<"B";
     mi=min(ar[0],ar[2]);
     if(mi==ar[0])
     {
         cout<<"A"<<"C"<<nn;
     }
     else
        cout<<"C"<<"A"<<nn;

 }
  else if(ar[2]==mi)
 {
     cout<<"C";
     mi=min(ar[0],ar[1]);
     if(mi==ar[0])
     {
         cout<<"A"<<"B"<<nn;
     }
     else
        cout<<"B"<<"A"<<nn;

 }



    return 0;
}
