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
ll pow(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007

ll ar[MAX];
int main()
{
    O_O;
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    reverse(all(v));
    //print(v);

    ll ml = min_element(v.begin(), v.end()) - v.begin();
    // cout << ml << nn;
    ml = (n - ml - 1);

    reverse(all(v));

    ll ans = 1;
    ans *= v[ml];
    ans *= n;
    // cout << ans << nn;
    for (ll i = 0; i < sz(v); i++)
        v[i] -= v[ml];
    ll x = 0;
    vector<ll> v1;
    for (ll i = 0; i < n; i++)
        if (v[i] == 0)
            v1.pb(i + 1);
    if (sz(v1) == n)
    {
        cout << ans << nn;
        return 0;
    }
    else if (sz(v1) == 1)
    {
        ans += (n - 1);
    }
    else if (sz(v1) == 2)
    {
        //cout << v1[1] << ss << v1[0] << nn;
        ll x = v1[1] - v1[0] - 1;

        ll y = n - v1[1];

        y += (v1[0] - 1);
        //  cout << x << ss << y << nn;
        ans += max(x, y);
    }
    else
    {
        ll x = 0;
        for (ll i = 0; i < sz(v1) - 1; i++)
        {
            ll y = v1[i + 1] - v1[i] - 1;
            x = max(x, y);
            //    cout << y << nn;
        }
        ll y = n - v1[sz(v1) - 1];
        y += (v1[0] - 1);
        x = max(x, y);
        ans += x;
    }

    cout << ans << nn;
    return 0;
}