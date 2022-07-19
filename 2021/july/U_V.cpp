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
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.second;
}
#define sz(x) (ll) x.size()

void debug(string s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
vector<ll> v, v1;
int main()
{
    O_O;

    ll ma = 1025;
    vector<bool> visit(ma + 1, 1);
    for (ll i = 2; i <= ma; i++)
    {
        if (visit[i])
        {
            v.eb(i);
            for (ll j = i * i; j <= ma; j += i)
                visit[j] = 0;
        }
    }
    set<ll> st;
    for (ll i = 0; i < sz(v); i++)
    {
        for (ll j = i + 1; j < sz(v); j++)
            st.insert(v[i] * v[j]);
    }

    ll n = 1e6;
    for (ll i = 2; i <= n; i++)
    {

        ll ans = 1;
        ll x = i;
        for (ll j = 0; v[j] * v[j] <= x; j++)
        {
            ll cnt = 0;

            while (x % v[j] == 0)
            {
                cnt++;
                x /= v[j];
            }

            cnt++;
            ans *= cnt;
            //  if(x<v[j]*v[j]) break;
        }
        if (x > 1)
            ans *= 2;
        if (st.count(ans))
            v1.eb(i);
    }
    sort(all(v1));
    for (ll i = 8; i < sz(v1); i += 9)
        cout << v1[i] << ss;
    cout << nn;
    //  cout << sz(v) << nn;

    return 0;
}