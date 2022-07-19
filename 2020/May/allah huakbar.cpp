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

       string w="1";
    string s,z[110],str[110];
    cin>>s;
    ll l=s.length();
    ll k=0,j=0,u=0,p=0;
    char c=s[l-1];
    ll n;
    cin>>n;
    vector<string>v;
    map<char,ll>mp;
    for(ll i=0; i<n; i++)
    {
        string x;
        cin>>x;
        // ll y= x.length();
        if(c==x[0]&&p==0)
        {
            v.pb(x);
            str[u++]=x;
            p=1;
        }
       else if(c==x[0]&&p==1)
        {
            v.pb(x);
            str[u++]=x;
            p=1;
        }
        else
            mp[x[0]]++;
    }
    ll count=0;
    for (auto it = mp.begin(); it != mp.end(); ++it){
      //  cout<<it->first<<ss<<it->second;
    }
    for(ll i=0; i<v.size(); i++)
    {
        string temp=v[i];

        ll l2=temp.length();
        char temp2=temp[l2-1];

        if(mp[temp2]>=1)
        {

            v.erase( remove(v.begin(), v.end(), temp), v.end());
             count++;
        }

    }
    //for(ll i=0;i<v.size();i++)
      //  cout<<v[i]<<nn;

    if(!p)
        cout<<"?"<<nn;
    else if(v.size()>0)
    {
              cout<<v[0]<<"!"<<nn;

    }

  else if(p==1)
            cout<<str[0]<<nn;
   return 0;
    }


