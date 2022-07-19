///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:
*/
#include <bits/stdc++.h>
using namespace std;
typedef int ll;
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
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define minusonep cout << "-1\n"
#define onep cout << "1\n"
#define nl cout << "\n"
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

//#define MAX 100005
#define mod 100000000
const ll MAX = (ll)1e5 + 5;
ll ar[MAX + 10], tr[4 * MAX + 10];
void build(ll u, ll b, ll e)
{
    if (b == e)
    {
        tr[u] = ar[b];
        return;
    }
    ll mid = (b + e) / 2;
    build(2 * u, b, mid);
    build(2 * u + 1, mid + 1, e);
    tr[u] = min(tr[2 * u], tr[2 * u + 1]);
}
ll query(ll u, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tr[u];
    ll mid = (b + e) / 2;
    ll lmid = query(2 * u, b, mid, i, j);
    ll rmid = query(2 * u + 1, mid + 1, e, i, j);
    return min(lmid, rmid);
}
int main()
{
    O_O;
    ll t;
    cin >> t;
    ll cnt = 1;
    while (t--)
    {
        string s = "hhhhh";
        ll n, q;
        cin >> n >> q;
        for (ll i = 1; i <= n; i++)
            cin >> ar[i];
        build(1, 1, n);
        //  cout << s << nn;

        cout << "Case " << cnt++ << ": " << nn;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = query(1, 1, n, l, r);
            cout << ans << nn;
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it