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
#define ppb pop_back
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
typedef map<ll, vll> mllv;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define minusonep cout << "-1\n"
#define onep cout << "1\n"
#define nl cout << "\n"
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
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

ll cal(ll n)
{
    return (n * (n + 1)) / 2;
}
#define MAX 1000005
#define mod 1000000007
ll ar[MAX], br[MAX];
int main()
{
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> st;
        vll v, v2;
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
            v.pb(ar[i]);
            v2.pb(ar[i]);
        }
        if (sz(st) == 1)
        {
            cout << 0 << nn;
            continue;
        }
        // for (ll i = 0; i <= 30; i++)
        // {
        //     // debug(1ll << i);
        //     for (ll j = 1; j <= n; j++)
        //     {

        //         if ((1ll << i) & ar[j])
        //             br[i]++;
        //     }
        // }
        // for (ll i = 0; i <= 31; i++)
        //     cout << br[i] << ss;
        // cout << nn;

        ll mn = ar[1] & ar[2];
        // for (ll i = 0; i <= 30; i++)
        // {
        //     if (br[i] == n)
        //     {
        //         mn += (1ll << i);
        //     }
        // }
        for (ll i = 3; i <= n; i++)
        {
            ll temp = mn & ar[i];
            mn = temp;
        }
        // ll ans = INT_MAX;
        // ll index = -1, index2 = -1;
        // for (ll i = 2; i <= n; i++)
        // {
        //     if (ar[i] & ar[i - 1] == mn)
        //     {
        //         index = i - 1;
        //         index2 = i;
        //     }
        // }
        // if (index != -1)
        // {
        //     ll step = 1;
        //     //  cout << index << ss << index2 << nn;
        //     for (ll i = index2 + 1; i <= n; i++)
        //     {
        //         if (i + 1 <= n)
        //         {
        //             if (ar[i] == ans)
        //             {
        //                 continue;
        //             }
        //             if (ar[i] & ar[i + 1] != ans)
        //             {
        //                 step++;
        //             }
        //         }
        //         else
        //         {
        //             if (ar[i] != ans)
        //             {
        //                 step++;
        //             }
        //         }
        //     }
        //     for (ll i = index - 1; i >= 1; i--)
        //     {
        //         if (i - 1 >= 1)
        //         {
        //             if (ar[i] == ans)
        //             {
        //                 continue;
        //             }
        //             if (ar[i] & ar[i - 1] != ans)
        //             {
        //                 step++;
        //             }
        //         }
        //         else
        //         {
        //             if (ar[i] != ans)
        //             {
        //                 step++;
        //             }
        //         }
        //     }
        //     cout << step << nn;
        //     // debug(step);

        // }
        // else
        // {
        ll step = 0, step1 = 0;
        //  debug(v);
        ll x = 0;
        reverse(all(v2));
        while (1)
        {
            //  debug(v);
            vll v1;
            set<ll> st;
            for (auto l : v)
                st.insert(l);
            if (sz(st) == 1)
            {
                break;
            }
            //  string s = "in";
            // debug(sz(v));
            for (ll i = 0; i < sz(v); i++)
            {
                // debug(i);
                if (v[i] != mn)
                {
                    if (i + 1 < sz(v))
                    {
                        ll temp = v[i] & v[i + 1];
                        v1.pb(temp);
                        step++;
                        i++;
                        // debug(s);
                    }
                    else if (i - 1 >= 0)
                    {
                        // debug(s);
                        if (v[i - 1] == mn)
                        {
                            step++;
                        }
                    }
                }
                else
                {
                    v1.pb(mn);
                }
            }
            //  debug(v1);
            v.clear();
            for (auto l1 : v1)
                v.pb(l1);
            // v = v1;
            //  x++;
            // debug(step);
        }
        // while (1)
        // {
        //     // debug(v2);
        //     vll v1;
        //     set<ll> st;
        //     for (auto l : v2)
        //         st.insert(l);
        //     if (sz(st) == 1)
        //     {
        //         break;
        //     }
        //     string s = "in";
        //     // debug(sz(v));
        //     for (ll i = 0; i < sz(v2); i++)
        //     {
        //         // debug(i);
        //         if (v2[i] != mn)
        //         {
        //             if (i + 1 < sz(v2))
        //             {
        //                 ll temp = v2[i] & v2[i + 1];
        //                 v1.pb(temp);
        //                 step1++;
        //                 i++;
        //                 // debug(s);
        //             }
        //             else if (i - 1 >= 0)
        //             {
        //                 // debug(s);
        //                 if (v2[i - 1] == mn)
        //                 {
        //                     step1++;
        //                 }
        //             }
        //         }
        //         else
        //         {
        //             v1.pb(mn);
        //         }
        //     }
        //     //  debug(v1);
        //     v2.clear();
        //     for (auto l4 : v1)
        //         v2.pb(l4);
        //     // v = v1;
        //     //  x++;
        //     // debug(step);
        // }
        cout << min(step, step1) << nn;
        // for (ll i = 0; i <= 31; i++)
        //     br[i] = 0;
    }
    // }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it