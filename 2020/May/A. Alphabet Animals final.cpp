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
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
 //v.erase( remove(v.begin(), v.end(), str), v.end())
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
 vector<string>v(110);

 string s,z[110],str[110];cin>>s;ll l=s.length();ll k=0,j=0,u=0;
 char c=s[l-1];
 ll n;cin>>n;
 for(ll i=0;i<n;i++)
 {
     string x;cin>>x;
    // ll y= x.length();
  if(c==x[0]){
    v[j++]=x;str[u++]=x;
  }
  else
     z[k++]=x;
 }
 ll count=0;
for(ll i=0;i<j;i++)
{
    string temp=v[i];ll l2=temp.length();
    char temp2=temp[l2-1];
   // cout<<temp<<nn;
  for(ll e=0;e<k;e++){
      string temp3=z[e];
     // cout<<temp3<<"*"<<nn;
         if(temp2==temp3[0])
         {
             //cout<<temp3[0]<<"#"<<nn;

            v.erase( remove(v.begin(), v.end(), temp), v.end());
             count++;z[e]="1";
           //  cout<<v[i]<<ss;
            // v[i]="2";
             break;
         }
 }
}
//cout<<j-count<<"&"<<nn;
if((j-count>0)){
for(ll i=0;i<j;i++)
{
    if(v[i]!=""){
   cout<<v[i]<<"!"<<nn;
      break;
    }
  //

}
}
else if(j-count==0&&j!=0)
    cout<<str[0]<<nn;
else
    cout<<"?"<<nn;
//}



    return 0;
}

