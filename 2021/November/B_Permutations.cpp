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

#define sz(x) (ll) x.size()
#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
string s[10];
vector<vector<string>> v(10);
int main()
{
    // init();
    // O_O ;
    ll n, k;
    cin >> n >> k;
    string s1;
    for (ll i = 0; i < n; i++)
        cin >> s[i];
    ll loop = 1;
    for (ll i = 1; i <= k; i++)
        loop *= i;
    for (ll i = 0; i < k; i++)
        s1 += i + '0';
    // cout << s1 << nn;
    ll ans = INT_MAX;
    for (int i = 0; i != loop; ++i)
    {

        next_permutation(s1.begin(), s1.end());
        ll mx = INT_MIN;
        ll mn = INT_MAX;
        //  cout << "s1 " << s1 << nn;
        for (ll j = 0; j < n; j++)
        {
            ll value = 0;
            for (ll i = 0; i < k; i++)
            {
                value *= 10;
                value += s[j][s1[i] - '0'] - '0'; // minnor bug

                // cout << s[j][s1[i]] << "#";
            }
            // cout << nn;
            // cout << value << nn;
            mx = max(value, mx);
            mn = min(value, mn);
        }
        ans = min(ans, mx - mn);
    }
    cout << ans << nn;

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it