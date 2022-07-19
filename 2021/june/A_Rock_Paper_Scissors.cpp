///*    ***Bismillahir Rahmanir Rahim***   */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double dl;
typedef unsigned long long ull;
#define pb push_back
#define PB pop_back
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define ss ' '
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
#define precision(a) fixed << setprecision(a)
#define rep(i, b) for (ll i = 0; i < (b); i++)
#define rep1(i, b) for (int i = 1; i <= (b); i++)
//#define rep(s,e)         for(i=s;i<e;i+=1)
//#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i, b, a) for (int i = (b); i >= (a); i--)
#define rep2(i, a, b, c) for (int i = (a); i != (b); i += (c))
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define S(a) scanf("%lld", &a)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
#define ff first
#define sc second
#define print(v)   \
    for (ll i : v) \
    cout << i << ss
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
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
ll pow(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

//#define MAX 1000
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    //O_O ;
    ll t;
    cin >> t;
    string a, b, c, d;
    cin >> a >> b;
    c = a, d = b;
    // cout << a.size() << ss << b.size() << nn;
    ll MAX = a.size() * b.size();
    ll x = ((MAX + a.size() - 1) / a.size()), y = ((MAX + b.size() - 1) / b.size());
    for (ll i = 0; i < x; i++)
        c += a;
    for (ll i = 0; i < y; i++)
        d += b;
    // cout << c.size() << ss ;
    ll t1 = 0, t2 = 0;
    // cout << c << nn << d << nn;
    for (ll i = 0; i < a.size() * b.size(); i++)
    {
        if (c[i] == 'R')
        {
            if (d[i] == 'S')
                t1++;
            else if (d[i] == 'P')
                t2++;
        }
        else if (c[i] == 'S')
        {
            if (d[i] == 'P')
                t1++;
            else if (d[i] == 'R')
                t2++;
        }
        else if (c[i] == 'P')
        {
            if (d[i] == 'R')
                t1++;
            else if (d[i] == 'S')
                t2++;
        }
        //  cout << t1 << ss << t2 << nn;
    }
    //  cout << t1 << ss << t2 << nn;
    // swap(t1, t2);
    ll temp1 = t / (a.size() * b.size()), temp2 = t % (a.size() * b.size());
    t1 *= temp1, t2 *= temp1;
    for (ll i = 0; i < temp2; i++)
    {
        if (c[i] == 'R')
        {
            if (d[i] == 'S')
                t1++;
            else if (d[i] == 'P')
                t2++;
        }
        else if (c[i] == 'S')
        {
            if (d[i] == 'P')
                t1++;
            else if (d[i] == 'R')
                t2++;
        }
        else if (c[i] == 'P')
        {
            if (d[i] == 'R')
                t1++;
            else if (d[i] == 'S')
                t2++;
        }
        //  cout << t1 << ss << t2 << nn;
    }
    swap(t1, t2);
    cout << t1 << ss << t2 << nn;

    return 0;
}