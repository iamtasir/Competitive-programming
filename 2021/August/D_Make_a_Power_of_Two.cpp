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
//ll minelementindex = min_element(v.begin(),v.end()) - v.begin();
//ll minelement = *min_element(v.begin(), v.end());
//ll maxelementindex = max_element(v.begin(),v.end()) - v.begin();
//ll maxelement = *max_element(v.begin(), v.end());
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
//auto s =to_string(42);
//string s = "12345";
// object from the class stringstream
//stringstream geek(s);
// The object has the value 12345 and stream
// it to the integer x
//int x = 0;
//geek >> x;
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

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
string s[100];
int main()
{
    //O_O ;
    ll t;
    cin >> t;

    for (ll i = 0; i <= 63; i++)
    {
        ll x = pow1(2, i);
        auto s2 = to_string(x);
        s[i] = s2;
        //  cout << s[i] << ss << nn;
    }
    while (t--)
    {
        ll n;
        cin >> n;

        auto s1 = to_string(n);
        ll ans = sz(s1) + 1;
        for (ll i = 0; i <= 63; i++)
        {
            ll c = 0;
            string s2 = s[i];
            // cout << "sizes2=" << sz(s2) << nn;
            // cout << "sizes1=" << sz(s1) << nn;
            for (ll j = 0, k = 0; k < sz(s2), j < sz(s1); j++)
            {
                // cout << "s2=" << s2 << nn;
                // cout << "s1=" << s1 << nn;
                if (s2[k] == s1[j])
                {
                    c++, k++;
                    // cout << s2 << ss << j << ss << k << nn;
                }
            }
            // cout << "cvalue=" << c << nn;
            ll add = sz(s2) - c;

            ll minus = sz(s1) - c;
            // cout << "add=" << ss << add << nn;
            // cout << "minus=" << minus << nn;
            ans = min(ans, add + minus);
        }
        cout << ans << nn;
    }

    return 0;
}