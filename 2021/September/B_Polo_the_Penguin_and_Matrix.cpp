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

void debug(ll s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll ar[105][105];
ll br[MAX];
ll cr[MAX];

int main()
{
    //O_O ;
    ll n, m, k;
    cin >> n >> m >> k;
    // vector<ll> v;
    ll x = 0;
    ll k1 = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            //  cout << ar[i][j] << ss;
            // br[k1++] = ar[i][j];
            if (ar[i][j] % k != 0)
                x = 1;
        }
    }
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            br[k1++] = ar[i][j];
            st.insert(ar[i][j] % k);
        }
    }
    ll n1 = n * m;
    ll sum = 0;
    for (ll i = 1; i <= n * m; i++)
        //  br[i] = v[i - 1];
        sum += br[i];
    if (sz(st) != 1)
        cout << -1 << nn;
    else
    {
        // print(v);
        sort(br + 1, br + n * m + 1);

        //     cout << br[i] << ss;

        // for (ll i = 2; i <= n; i++)
        //     cr[i] += cr[i - 1];
        ll sum1 = 0;

        ll ans = INT_MAX;
        // cout << ans << nn;
        for (ll i = 1; i <= n1; i++)
        {
            ll sumbaki = sum - br[i];
            ll pesone = sum1;
            ll samne = sum - br[i] - sum1;
            ll targetsamne = (n1 - i) * br[i];
            ll targetpesone = (i - 1) * br[i];
            if (i == n1)
                targetsamne = 0;
            if (i == 1)
                targetpesone = 0;
            ll stepfinal = abs(samne - targetsamne) / k + abs(targetpesone - pesone) / k;
            ans = min(ans, stepfinal);

            sum1 += br[i];
            //  debug(stepfinal);
            // cout << ans << nn;
        }
        cout << ans << nn;
    }

    return 0;
}