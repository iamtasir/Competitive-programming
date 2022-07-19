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
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
string s1 = "abacaba", s2 = "caba";

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll cheack(string ss1, string s, ll index)
{
    ll n = sz(s);
    ll c = 0;
    for (ll i = index, j = 0; i < 7 + index; i++, j++)
    {
        if (s[i] == '?' || s[i] == s1[j])
            continue;
        else
            c = 1;
    }
    if (c == 0)
    {
        ll cnt = 0;
        for (ll i = index - 1, j = 0; i >= min(0ll, index - 4); i--, j++)
            if (s[i] == s2[j])
                cnt++;
        if (cnt == 4)
            c = 1;
    }
    if (c == 0)
    {
        ll cnt = 0;
        for (ll i = index + 1, j = 0; i < max(n, index + 5); i++, j++)
            if (s[i] == s2[j])
                cnt++;
        if (cnt == 4)
            c = 1;
    }
    if (c == 0)
        return 1;
    else
        return 0;
}
int main()
{
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n1;
        cin >> n1;
        string s;
        cin >> s;
        ll cnt1 = 0;
        for (ll i = 0; i < n1 - 6; i++)
        {
            string ss1 = s.substr(i, 7);
            //  cout << ss1 << nn;
            if (ss1 == s1)
                cnt1++;
        }

        if (cnt1 == 1)
        {
            yes;
            for (ll i1 = 0; i1 < n1; i1++)
                if (s[i1] == '?')
                    s[i1] = 'p';
            cout << s << nn;
        }
        else if (cnt1 > 1)
            no;
        else
        {
            ll x1 = 1;
            for (ll i = 0; i < n1 - 6; i++)
            {
                //  string ss1 = s.substr(i, 7);
                ll n = sz(s);
                ll index = i;
                string s5 = s;

                ll c = 0;
                for (ll i1 = index, j = 0; i1 < 7 + index; i1++, j++)
                {
                    if (s5[i1] == '?' || s5[i1] == s1[j])
                    {
                        s5[i1] = s1[j];
                    }
                    else
                        c = 1;
                }
                if (c == 0)
                {
                    ll cnt = 0;
                    for (ll i1 = index - 1, j = 0; i1 >= 0; i1--, j++)
                    {
                        string ss2 = s5.substr(i1, 7);
                        if (ss2 == s1)
                            c = 1;
                    }
                }
                if (c == 0)
                {
                    ll cnt = 0;
                    for (ll i1 = index + 1, j = 0; i1 < n - 6; i1++, j++)
                    {
                        string ss2 = s5.substr(i1, 7);
                        if (ss2 == s1)
                            c = 1;
                    }
                }
                if (c == 0)
                {
                    yes;
                    x1 = 0;
                    for (ll i1 = index, j = 0; i1 < index + 7, j < 7; j++, i1++)
                    {
                        s5[i1] = s1[j];
                    }
                    for (ll i1 = 0; i1 < n; i1++)
                        if (s5[i1] == '?')
                            s5[i1] = 'p';
                    cout << s5 << nn;
                    break;
                }
            }
            if (x1)
                no;
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it