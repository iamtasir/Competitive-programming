///*    ***Bismillahir Rahmanir Rahim***   */
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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define precision(a) fixed << setprecision(a)
#define rep(i,b) for(ll i=0;i<(b);i++)
#define rep1(i,b) for(int i=1;i<=(b);i++)
//#define rep(s,e)         for(i=s;i<e;i+=1)
//#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep2(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
#define     print(v)        for(ll i:v) cout<<i<<ss
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first != b.first) return a.first > b.first;
    else
    return a.second > b.second;
}
//ll minelementindex = min_element(v.begin(),v.end()) - v.begin();
//ll minelement = *min_element(v.begin(), v.end());
//ll maxelementindex = max_element(v.begin(),v.end()) - v.begin();
//ll maxelement = *max_element(v.begin(), v.end());
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
//auto s =to_string(42);
//string s = "12345";
// object from the class stringstream
//stringstream geek(s);
// The object has the value 12345 and stream
// it to the integer x
//int x = 0;
//geek >> x;
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007



int main()
{
 O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a,b;cin>>a>>b;
  string s;cin>>s;
  ll l=a+b;
  ll p=0;
  for(ll i=0;i<l/2;i++)
  {
      if(s[i]=='0'){

        a-=2;
       // cout<<"*"<<a<<nn;

     if(s[l-i-1]=='?') s[l-i-1]='0';
       else if(a<0||s[l-i-1]=='1')p=1;
    }
    else if(s[i]=='1'){

       b-=2;
       if(s[l-i-1]=='?')s[l-i-1]='1';
     else if(b<0||s[l-i-1]=='0')p=1;

}


  }
  reverse(all(s));
    for(ll i=0;i<l/2;i++)
  {
      if(s[i]=='0'&&s[l-i-1]=='?'){
        //  cout<<"&"<<ss<<a<<nn;
          s[l-i-1]='0';
        a-=2;
        if(a<0)p=1;
       //  cout<<"&"<<ss<<a<<nn;
    }
    else if(s[i]=='1'&&s[l-i-1]=='?'){
        s[l-i-1]='1';
       b-=2;
      if(b<0)p=1;

}


  }
  reverse(all(s));
  //cout<<s<<nn;

  for(ll i=0;i<l/2;i++)
  {
      if(s[i]=='?')
      {
        //  cout<<"in"<<a<<nn;
          if(s[l-1-i]=='?'){

            if(a>1)a-=2,s[i]='0',s[l-i-1]='0';
             else if(b>1)b-=2,s[i]='1',s[l-i-1]='1';
            else {p=1;break;}

          }
      }
  }
 // cout<<s<<nn;
 // cout<<p<<nn;
  if(l&1)
  {
      if(s[l/2]=='?')
      {
          if(a>0)a--,s[l/2]='0';
          else if(b>0)b--,s[l/2]='1';
          else
            p=1;
      }
      else if(s[l/2]=='1')b--;
      else if(s[l/2]=='0')a--;

  }
  if(a!=0||b!=0) p=1;
//  cout<<s<<nn;
 // for(ll i=0;i<l;i++) if(s[i]=='?')p=1;
  if(p)
    cout<<-1<<nn;
  else
    cout<<s<<nn;




   }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/
