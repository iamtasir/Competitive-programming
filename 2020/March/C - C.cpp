
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
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005
 void decToBinary(ll n,ll x)
{
    // array to store binary number
    ll binaryNum[32];

    // counter for binary array
    ll i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    cout<<"#"<<x<<ss<<":"<<ss;
    for (ll j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
        cout<<nn;
}

// Driver program to test above function


int main()
{
 //O_O ;
   ll t,x=1;
   cin>>t;
   while(t--){
        ll temp,ans=0;
     string s;
     cin>>s;
     ll l=s.length();
     map<ll,ll> mp;
     for(ll i=0;i<l;i++)
     {
         temp=s[i];
         mp[temp]++;
         if(mp[temp]==1){
            ans+=temp;
           // cout<<ans<<nn;
     }
     }
    // cout<<ans<<nn;

    decToBinary(ans,x);

x++;
   }


    return 0;
}
