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

//#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
#define MAX 100000

set<ll> arr;

bool prime[MAX];

// Function to generate prime numbers
void SieveOfEratosthenes()
{
    // Create a boolean array "prime[0..n]" and initialize
    // make all entries of boolean array 'prime'
    // as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p < MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime

        if (prime[p] == true)
        {

            // Update all multiples of p
            for (ll i = p * 2; i < MAX; i += p)
                prime[i] = false;
        }
    }

    // store all prime numbers
    // to vector 'arr'
    for (int p = 2; p < MAX; p++)
    {
        if (prime[p])
        {
            arr.insert(p);
            // cout << p << ss;
        }
    }
}

// Driver code
int main()
{
    SieveOfEratosthenes();
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        vector<ll> even, odd;

        ll n;
        cin >> n;
        ll evensum = 0;
        ll oddsum = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x & 1)
            {
                odd.pb(x);
                oddsum += x;
                mp[x] = i + 1;
            }
            else
            {
                even.pb(x);
                evensum += x;
                mp[x] = i + 1;
            }
        }
        if (arr.count(evensum + oddsum))
        {
            debug(sz(even) + sz(odd) - 1);
            for (auto l : even)
                cout << mp[l] << ss;
            for (ll i = 0; i < sz(odd) - 1; i++)
                cout << mp[odd[i]] << ss;
            cout << nn;
        }
        else
        {
            debug(sz(even) + sz(odd));
            for (auto l : even)
                cout << mp[l] << ss;
            for (ll i = 0; i < sz(odd); i++)
                cout << mp[odd[i]] << ss;
            cout << nn;
        }
    }
    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it