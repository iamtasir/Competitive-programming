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
ll secondmax(ll a, ll b, ll c)
{
    ll ar[3];
    ar[0] = a, ar[1] = b, ar[2] = c;
    sort(ar, ar + 3);
    return ar[1];
}
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.sc != b.sc)
        return a.sc > b.sc;
    else
        return a.ff > b.ff;
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

void debug(ll s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    //O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        set<pll> st;
        vpll v1;
        for (ll index = 1; index <= n; index++)
        {
            ll value;
            cin >> value;
            //mp[i] = x;
            if (value > 0)
                st.insert({value, index});
        }
        //   //.  sort(all(v), comp);

        //     // for (auto l : v)
        //     //     cout << l.ff << ss << l.sc << nn;
        //     vpll odd, even;

        // for (ll i = 0; i < sz(v); i++)
        // {
        //     if (i & 1)
        //         odd.pb(v[i]);
        //     else
        //         even.pb(v[i]);
        // // }
        // reverse(all(odd));
        // reverse(all(even));
        // for (auto l : even)
        //     cout << l.ff << ss << l.sc << nn;

        // ll i = 0, j = 0;
        // ll ans = 0;
        while (sz(st) > 1)
        {
            // cout << sz(st) << nn;
            auto x = *st.rbegin();
            st.erase(*st.rbegin());
            auto y = *st.rbegin();
            st.erase(*st.rbegin());
            // y1++;
            // auto y = *y1;

            // cout << x.ff << ss << x.sc << nn;
            // cout << y.ff << ss << y.sc << nn;
            //  ll mi = min(x.ff, y.ff);
            //  ans += mi;
            v1.pb({x.sc, y.sc});
            if (x.ff > 1)
                st.insert({x.ff - 1, x.sc});
            if (y.ff > 1)
                st.insert({y.ff - 1, y.sc});

            // for (ll k = 0; k < mi; k++)
            //     v1.pb({x.sc, y.sc});
            // //  cout << "mi " << mi << nn;
            // if (x.ff - mi == 0)
            // {
            //     // st.erase(*st.rbegin());
            //     // st.erase(*st.rbegin());
            //     if (y.ff - mi > 0)
            //         st.insert({y.ff - mi, y.sc});
            // }
            // else
            // {
            //     // st.erase(*st.rbegin());
            //     // st.erase(*st.rbegin());

            //     if (x.ff - mi > 0)
            //         st.insert({x.ff - mi, x.sc});
            // }
        }
        // cout << ans << nn;
        cout << sz(v1) << nn;
        for (auto l : v1)
            cout << l.ff << ss << l.sc << nn;
    }

    return 0;
}