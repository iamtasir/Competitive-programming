///*    ***Bismillahir Rahmanir Rahim***   */
/// if you are seeing my code get out from here if you are from bubt and my intake mate
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

#define MAX 1000005
#define mod 1000000007
pll p[MAX];
pll tr[4 * MAX + 9];
string s;
void build(ll node, ll begin, ll end)
{
    if (begin == end)
    {
        if (s[begin] == '(')
            tr[node].first += 1;
        else
            tr[node].sc += 1;
        return;
    }
    ll mid = (begin + end) / 2;
    build(2 * node, begin, mid);
    build(2 * node + 1, mid + 1, end);
    ll temp = tr[2 * node].ff;
    ll temp2 = tr[2 * node + 1].sc;
    ll val = min(temp, temp2);
    temp -= val;
    temp2 -= val;
    tr[node].ff = temp + tr[2 * node + 1].ff;
    tr[node].sc = tr[2 * node].sc + temp2;
    // cout << tr[node].ff << ss << tr[node].sc << nn;
}
pll query(ll node, ll begin, ll end, ll i, ll j)
{
    if (j < begin || end < i)
        return {0ll, 0ll};
    if (i <= begin && end <= j)
        return {tr[node].ff, tr[node].sc};
    ll mid = (begin + end) / 2;
    pll left = query(2 * node, begin, mid, i, j);
    pll right = query(2 * node + 1, mid + 1, end, i, j);
    ll temp = left.ff;
    ll temp2 = right.sc;
    ll val = min(temp, temp2);
    temp -= val;
    temp2 -= val;
    return {temp + right.ff, left.sc + temp2};
}
int main()
{
    // O_O ;
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        cin >> s;
        ll n = sz(s);
        string s1 = "#";
        s1 += s;
        s = s1;

        build(1, 1, n);
        // for (ll i = 0; i <= 4 * n; i++)
        //     cout << tr[i].ff << ss << tr[i].sc << nn;
        ll q;
        cin >> q;
        while (q--)
        {
            ll i, j;
            cin >> i >> j;
            pll p = query(1, 1, n, i, j);
            //  cout << p.ff << ss << p.sc << nn;
            cout << (j - i + 1) - (p.ff + p.sc) << nn;
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it