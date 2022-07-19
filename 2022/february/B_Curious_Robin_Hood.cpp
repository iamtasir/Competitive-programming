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

#define MAX 100005
#define mod 1000000007
ll ar[MAX], tr[4 * MAX + 7];
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
    tr[u] = tr[2 * u] + tr[2 * u + 1];
}
ll query(ll u, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0ll;
    if (i <= b && e <= j) ///(i<=b<=e<=j) //// begin and end (i,j er majhe )
        return tr[u];
    // if (b >= i && e <= j)
    //     return tr[u];
    ll mid = (b + e) / 2;
    ll leftsum = query(2 * u, b, mid, i, j);
    ll rightsum = query(2 * u + 1, mid + 1, e, i, j);
    return leftsum + rightsum;
}
void update(ll u, ll b, ll e, ll index, ll value)
{
    if (b == e)
    {
        tr[u] += value;
        return;
    }
    ll mid = (b + e) / 2;
    if (index <= mid)
        update(2 * u, b, mid, index, value);
    else
        update(2 * u + 1, mid + 1, e, index, value);
    tr[u] = tr[2 * u] + tr[2 * u + 1];
}
void updatezero(ll u, ll b, ll e, ll index)
{
    if (b == e)
    {
        tr[u] = 0ll;
        return;
    }
    ll mid = (b + e) / 2;
    if (index <= mid)
        updatezero(2 * u, b, mid, index);
    else
        updatezero(2 * u + 1, mid + 1, e, index);
    tr[u] = tr[2 * u] + tr[2 * u + 1];
}
int main()
{
    O_O;
    ll t;
    cin >> t;
    ll cnt = 1;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        for (ll i = 1; i <= n; i++)
            cin >> ar[i];
        build(1, 1, n);
        // for (ll i = 1; i <= 4 * n; i++)
        //     cout << i << ss << tr[i] << nn;
        cout << "Case " << cnt++ << ": " << nn;
        while (q--)
        {

            ll x;
            cin >> x;
            // string s = "hhhhh";
            // cout << s << nn;
            if (x == 1)
            {
                ll index;
                cin >> index;
                index++;
                cout << query(1, 1, n, index, index) << nn;
                updatezero(1, 1, n, index);
            }
            if (x == 2)
            {
                ll index, value;
                cin >> index >> value;
                index++;
                update(1, 1, n, index, value);
            }
            if (x == 3)
            {
                ll l, r;
                cin >> l >> r;
                l++, r++;
                cout << query(1, 1, n, l, r) << nn;
            }
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it