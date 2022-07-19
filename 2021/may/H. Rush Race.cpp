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
#define sz(x) x.size()
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
vector<pair<string, vector<ll>>> v(30);
vector<pair<string, pair<ll, ll>>> v2(30);
int main()
{
    //O_O ;
    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        v[i].ff = s;
        ll d = 0;
        v[i].sc.pb(d);
        ll n;
        cin >> n;
        ll left[101], right[101], se[101];
        ll x = 0;
        //   cout << "in" << nn;
        for (ll j = 1; j <= n; j++)
        {

            cin >> left[j] >> right[j] >> se[j];
            for (ll k = left[j]; k <= right[j]; k++)
            {
                v[i].sc.pb(se[j]);
            }
            x = right[j];
            //cout << x << nn;
        }
        while (x < 100)
        {

            for (ll j = 1; j <= n; j++)
            {

                for (ll k = x + left[j]; k <= x + right[j]; k++)
                {
                    v[i].sc.pb(se[j]);
                    //cout << se[j] << ss;
                }
                x = (x + right[j]);
                //   cout << x << nn;
            }
        }
        //   auto v1 = v[i].sc;
        //   for (ll p = 1; p < sz(v1); p++)
        // {
        //   v1[p] += v1[p - 1];
        // cout << v1[p] << ss;
        //}
    }
    ll t1;
    cin >> t1;
    vector<ll> v9;
    while (t1--)
    {
        ll minite;
        cin >> minite;

        cout << "position chart at minute " << minite << " :" << nn;
        for (ll i = 1; i <= t; i++)
        {
            string s4 = v[i].first;
            auto v5 = v[i].second;
            for (ll k = 1; k < sz(v5); k++)
            {
                v5[k] += v5[k - 1];
                // cout << v5[k] << ss << k << ss;
            }
            ll length = sz(v5) - 1;
            //   cout << v5[100] << ss;
            ll ans = 0;
            ll temp = minite;
            if (minite > length)
            {
                ans = (v5[length] * (minite / (length)));
                if (minite % length != 0)
                    temp = minite % length;
                else
                    temp = 0;
            }
            v2[i].first = s4;
            //  cout << ans << nn;
            v2[i].second = {ans + v5[temp], i};
            v9.pb(ans + v5[temp]);
        }
        sort(all(v9));
        reverse(all(v9));
        ll c = 1;
        for (ll k = 0; k < sz(v9); k++)
        {
            for (ll i = 1; i <= t; i++)
            {
                pair<ll, ll> p2;
                p2 = v2[i].second;
                if (p2.first == v9[k])
                {
                    cout << c++ << ". ";
                    cout << v2[i].first << ss;

                    p2 = v2[i].second;
                    cout << p2.first << nn;
                    v2[i].second = {-1, -1};
                    break;
                }
            }
        }
    }
    return 0;
}