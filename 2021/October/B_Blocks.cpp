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
#define eb emplace_back
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
#define dbug(vari) cerr << #vari << = << (vari) << endl
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
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
ll secondmax(ll a, ll b, ll c)
{
    ll ar[3];
    ar[0] = a, ar[1] = b, ar[2] = c;
    sort(ar, ar + 3);
    return ar[1];
}
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.second;
}
#define sz(x) (ll) x.size()
// ll minelementindex = min_element(v.begin(),v.end()) - v.begin();
// ll minelement = *min_element(v.begin(), v.end());
// ll maxelementindex = max_element(v.begin(),v.end()) - v.begin();
// ll maxelement = *max_element(v.begin(), v.end());
// memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
// sort(a,a+n,greater<ll>())
// for (auto it = mp.begin(); it != mp.end(); ++it){}
//  string x(w.size(),'1');
// auto s =to_string(42);
// string s = "12345";
//  object from the class stringstream
// stringstream geek(s);
//  The object has the value 12345 and stream
//  it to the integer x
// int x = 0;
// geek >> x;
#define MOD 1000000007
inline void normal(ll &a)
{
    a %= MOD;
    (a < 0) && (a += MOD);
}
inline ll modMul(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    return (a * b) % MOD;
}
inline ll modAdd(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    return (a + b) % MOD;
}
inline ll modSub(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
inline ll modPow(ll b, ll p)
{
    ll r = 1;
    while (p)
    {
        if (p & 1)
            r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
inline ll modInverse(ll a) { return modPow(a, MOD - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

void debug(string s)
{
    cout << s << nn;
}

void debug(ll s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    // O_O ;
    ll n;
    cin >> n;
    string s, s1;
    cin >> s;
    s1 = s;

    // cout << s << nn;
    vector<ll> v;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            // debug("in");
            if (s[i - 1] == 'W' && i - 1 >= 0)
            {
                swap(s[i], s[i - 1]);
                v.pb(i);
            }
            else if (s[i - 1] == 'B' && i - 1 >= 0)
            {
                s[i] = 'W', s[i - 1] = 'W';
                v.pb(i);
            }
        }
        // cout << s << nn;
    }
    if (s[0] == 'B')
    {

        vector<ll> v1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s1[i] == 'W')
            {
                // debug("in");
                if (s1[i - 1] == 'B' && i - 1 >= 0)
                {
                    swap(s1[i], s1[i - 1]);
                    v1.pb(i);
                }
                else if (s1[i - 1] == 'W' && i - 1 >= 0)
                {
                    s1[i] = 'B', s1[i - 1] = 'B';
                    v1.pb(i);
                }
            }
            // cout << s << nn;
        }
        if (s1[0] == 'W')

            cout << -1 << nn;
        else
        {
            debug(sz(v1));
            print(v1);
            cout << nn;
        }
    }
    else
    {
        debug(sz(v));
        print(v);
        cout << nn;
    }
    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it