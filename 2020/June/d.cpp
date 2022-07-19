#include<bits/stdc++.h>
using namespace std;
typedef        long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define        pb              push_back
#define        PB              pop_back
#define        nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define        all(p)          p.begin(),p.end()
#define        zz(v)           (ll)v.size()
#define        ss              ' '
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define        gcd(a,b)        __gcd(a,b)
#define        lcm(a,b)        (a*b)/gcd(a,b)
#define        pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef        vector<ll>      vll;
typedef        map<string,ll>      msl;
typedef        map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   ll f=0;
   while(t--){
        string s;cin>>s;

        while(s.length()>1)
        {

        ll l=s.length();
        ll x=0;
        for(ll i=0;i<l;i++)
        {
            x+=s[i]-'0';
           // cout<<x<<nn;
        }

       // int x=s[l-1]-'0';
     //   cout<<x<<nn;
     auto w =to_string(x);
   s=w;

        }
        ll p=s[0]-'0';
        if(p==9)
            cout<<"Case "<<++f<<": "<<"YES"<<nn;
            else
               cout<<"Case "<<++f<<": "<<"NO"<<nn;


   }


    return 0;
}
