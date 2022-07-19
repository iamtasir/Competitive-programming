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
vector<ll> v;
int main()
{
    //O_O ;
    ll ma = 40000;
    vector<bool> visit(ma + 1, 1);
    v.pb(2);
    for (ll i = 3; i <= ma; i += 2)
    {
        if (visit[i])
        {
            v.pb(i);
            for (ll j = i * i; j <= ma; j += i)
                visit[j] = 0;
        }
    }
    //  cout << sz(v) << nn;
    // for (ll i = 0; i < 10; i++)
    //     cout << v[i] << nn;
    ll t;
    cin >> t;
    while (t--)
    {

        ll p, q;
        cin >> p >> q;
        if (p % q)
        {
            cout << p << nn;
        }
        else
        {
            vpll p1;
            ll x = q;
            for (ll j = 0; v[j] * v[j] <= x; j++)
            {
                //  cout << v[j] << nn;
                ll cnt = 0;
                while (x % v[j] == 0)
                {
                    cnt++;
                    x /= v[j];
                }
                if (cnt > 0)
                    p1.pb({v[j], cnt});
            }
            if (x > 1)
                p1.pb({x, 1});
            ll ans = 1;
            ll pp1 = p;
            for (auto l : p1)
            {

                ll x1 = l.first, y1 = l.sc;
                ll cnt1 = 0;
                //  cout << x1 << ss << y1 << nn;
                while (pp1 % x1 == 0)
                {
                    // cout << x1 << ss << y1 << nn;
                    pp1 /= x1;
                    cnt1++;
                }
                if (cnt1 > 0)
                {
                    ll temp = pow1(x1, y1 - 1);
                    ll temp2 = p / temp;
                    ans = max(ans, temp2);
                }
            }
            cout << ans << nn;
        }
    }

    return 0;
}