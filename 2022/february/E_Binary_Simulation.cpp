///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

#define MAX 100005
#define mod 1000000007
ll ar[MAX + 9], tr[4 * MAX + 9];
void update(ll node, ll begin, ll end, ll index, ll value)
{
    if (begin == end)
    {
        tr[node] += value;
        return;
    }
    ll mid = (begin + end) / 2;
    if (index <= mid)
        update(2 * node, begin, mid, index, value);
    else
        update(2 * node + 1, mid + 1, end, index, value);
    tr[node] = tr[2 * node] + tr[2 * node + 1];
}
ll query(ll node, ll begin, ll end, ll i, ll j)
{
    if (i > end || j < begin)
        return 0ll;
    if (i <= begin && end <= j)
        return tr[node];
    ll mid = (begin + end) / 2;
    ll leftsum = query(2 * node, begin, mid, i, j);
    ll rightsum = query(2 * node + 1, mid + 1, end, i, j);
    return leftsum + rightsum;
}
int main()
{
    // O_O;
    ll t;
    cin >> t;
    ll cnt = 1;
    while (t--)
    {

        string s;
        cin >> s;
        ll n = sz(s);
        for (ll i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
                ar[i] = 1;
            else
                ar[i] = 0;
        }
        ll q;
        cin >> q;
        //  build(1,1,n);
        cout << "Case " << cnt++ << ":"
             << "\n";
        while (q--)
        {
            char ch;
            cin >> ch;
            if (ch == 'I')
            {
                ll i, j;
                cin >> i >> j;
                update(1, 1, n, i, 1);
                if (j != n)
                    update(1, 1, n, j + 1, -1);
            }
            else
            {
                ll l;
                cin >> l;
                ll ans = query(1, 1, n, 1, l) % 2;
                // cout << "ans = " << ans << nn;
                ll temp = ans ^ ar[l];
                cout << temp << "\n";
            }
        }
        for (ll i = 1; i <= n + 100; i++)
            ar[i] = 0;
        for (ll i = 1; i <= 4 * n + 10; i++)
            tr[i] = 0;
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it