///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used: 
*/
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
#define sz(x) (ll) x.size()
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

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    //O_O ;
    dl n, a;
    cin >> n >> a;
    ll t = 0, t1, t2 = 0;
    dl unit = (180) / n;
    dl m1 = floor(a / unit);
    if (m1 == 0)
    {
        cout << 1 << ss << 2 << ss << n << nn;
        return 0;
    }
    else if (m1 == n || a > (unit * (n - 2)))
    {
        cout << 1 << ss << 2 << ss << 3 << nn;
        return 0;
    }
    //  cout << m1 << nn;
    dl x = abs(a - m1 * unit), y = abs(a - ((m1 + 1) * unit));
    // cout << x << ss << y << nn;
    if (x > y)
    {
        t2 = (n - ((ll)m1 + 1));
        t2++;
    }
    else
    {
        t2 = (n - ((ll)m1));
        t2++;
    }
    cout << 1 << ss << 2 << ss << t2 << nn;

    return 0;
}