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
int main()
{
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        string s;
        cin >> s;
        s += "def";
        // for (ll i = 0; i < n; i++)
        // {
        //     ll c = s[i] - 96;
        //     dp[i][c]++;
        // }
        ll ans = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX, ans4 = INT_MAX;
        for (ll i = 0; i < n - 1; i++)
        {
            ll ar[100];
            ar[1] = 0;
            for (ll j = i; j < i + 2; j++)
            {
                if (s[j] == 'a')
                    ar[1]++;
            }
            if (ar[1] == 2)
            {
                ans = 2;
                break;
            }
        }
        for (ll i = 0; i < n - 2; i++)
        {
            ll ar[100];
            ar[1] = 0;
            ar[2] = 0;
            ar[3] = 0;
            for (ll j = i; j < i + 3; j++)
            {
                if (s[j] == 'a')
                    ar[1]++;
                if (s[j] == 'b')
                    ar[2]++;
                if (s[j] == 'c')
                    ar[3]++;
            }
            if (ar[1] == 2 && (ar[2] == 1 || ar[3] == 1))
            {
                ans2 = 3;
                break;
            }
        }
        for (ll i = 0; i < n - 3; i++)
        {

            ll ar[100];
            ar[1] = 0;
            ar[2] = 0;
            ar[3] = 0;
            for (ll j = i; j < i + 4; j++)
            {
                if (s[j] == 'a')
                    ar[1]++;
                if (s[j] == 'b')
                    ar[2]++;
                if (s[j] == 'c')
                    ar[3]++;
            }

            if (ar[1] == 2 && ar[2] == 1 && ar[3] == 1)
            {
                ans4 = 4;
                break;
            }
        }
        for (ll i = 0; i < n - 6; i++)
        {
            ll ar[100];
            ar[1] = 0;
            ar[2] = 0;
            ar[3] = 0;
            for (ll j = i; j < i + 7; j++)
            {
                if (s[j] == 'a')
                    ar[1]++;
                if (s[j] == 'b')
                    ar[2]++;
                if (s[j] == 'c')
                    ar[3]++;
            }
            if (ar[1] == 3 && ar[2] == 2 && ar[3] == 2)
            {
                ans3 = 7;
                break;
            }
        }
        ll temp = min(ans, min(ans2, min(ans3, ans4)));
        if (temp == INT_MAX)

            cout << -1 << nn;
        else
            cout << temp << nn;
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it