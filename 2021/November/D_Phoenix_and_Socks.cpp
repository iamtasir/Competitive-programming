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
#define sz(x) (ll) x.size()
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
#define precision(a) fixed << setprecision(a)
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
#define minusonep cout << "-1\n"
#define onep cout << "1\n"
#define nl cout << "\n"
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
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
void debug1(string s)
{
    cout << s << nn;
}

void debug1(char s)
{
    cout << s << nn;
}

void debug1(ll s)
{
    cout << s << nn;
}

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
// if x>LLONG_MAX/y(or y>LLONG_MAX/x), then overflow
// for(int i = 0; i < n; i++) {
// cin >> ar[i];
// for(int j = 0; j < 30; j++)
// if(ar[i] & (1 << j)) cnt[j]++;
// }
//  ll lowerindex=lower_bound(v.begin(),v.end(),value)-v.begin();//zero base
//  ll upperindex=upper_bound(v.begin().v.end(),value)-v.begin();//zero base
//  ll lowerindex=lower_bound(ar,ar+n,value)-ar;// zero base;
//  ll upperindex=upper_bound(ar,ar+n,value)-ar;//zero base;
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(dl t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << " ";
    _print(p.sc);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

#define MAX 1000005
#define mod 1000000007
int main()
{
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {
        map<ll, ll> l, r;
        ll n, lrange, range;
        cin >> n >> lrange >> range;
        for (ll i = 0; i < lrange; i++)
        {
            ll x;
            cin >> x;
            l[x]++;
        }
        ll c = 0;
        for (ll i = 0; i < range; i++)
        {
            ll x;
            cin >> x;
            if (l[x] > 0)
                l[x]--, c++;
            else
                r[x]++;
        }
        // debug(l);
        // debug(r);
        lrange -= c;
        range -= c;
        if (lrange == range)
        {
            cout << lrange << nn;
        }
        else
        {
            ll ans = 0;
            if (lrange > range)
            {
                ll temp = lrange - range;
                for (auto x : l)
                {
                    if (x.sc & 1)
                    {
                        if (range == 0)
                            break;
                        ll f = x.ff;
                        l[f]--;
                        range--;
                        lrange--;
                        ans++;
                        if (range == 0)
                            break;
                    }
                }
                if (range > 0)
                {
                    for (auto x : l)
                    {
                        if (x.sc > 0)
                        {
                            ll f = x.ff;
                            l[f] -= 2;
                            range -= 2;
                            ans += 2;
                            lrange -= 2;
                            if (range == 0)
                                break;
                        }
                    }
                }
                for (auto x : l)
                {
                    if (x.sc > 0 && x.sc & 1)
                    {
                        // debug(l);
                        // debug(r);
                        ans += (x.sc / 2);
                        l[x.ff] = 1;
                        lrange -= ((x.sc) - 1);
                        // debug1(ans);
                    }
                    else if (x.sc % 2 == 0 && x.sc > 0)
                    {
                        ans += (x.sc / 2);
                        l[x.ff] = 0;
                        lrange -= x.sc;
                    }
                }
                if (lrange > 0)
                {
                    ans += lrange;
                }
                debug1(ans);
            }
            else
            {
                swap(lrange, range);
                swap(l, r);
                ll ans = 0;
                ll temp = lrange - range;
                for (auto x : l)
                {
                    if (x.sc & 1)
                    {
                        if (range == 0)
                            break;

                        ll f = x.ff;
                        l[f]--;
                        range--;
                        lrange--;
                        ans++;
                        if (range == 0)
                            break;
                    }
                }
                // debug(l);
                // debug(r);
                if (range > 0)
                {
                    for (auto x : l)
                    {
                        if (x.sc > 0)
                        {
                            ll f = x.ff;
                            l[f] -= 2;
                            range -= 2;
                            ans += 2;
                            lrange -= 2;
                            if (range == 0)
                                break;
                        }
                    }
                }

                // debug(l);
                // debug(r);
                // debug(ans);
                for (auto x : l)
                {
                    if (x.sc > 0 && x.sc & 1)
                    {
                        // debug(l);
                        // debug(r);
                        ans += (x.sc / 2);
                        l[x.ff] = 1;
                        lrange -= ((x.sc) - 1);
                        // debug1(ans);
                    }
                    else if (x.sc % 2 == 0 && x.sc > 1)
                    {
                        ans += (x.sc / 2);
                        l[x.ff] = 0;
                        lrange -= x.sc;
                        // debug(l);
                        // debug(r);
                        // debug(ans);
                    }
                }
                if (lrange > 0)
                {
                    ans += lrange;
                }
                debug1(ans);
            }
            // debug1(ans);
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it