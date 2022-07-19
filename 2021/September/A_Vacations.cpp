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

#define MAX 10005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int dp[3][MAX];
int ar[MAX];
int main()
{
    //O_O ;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    ll days = 0;
    dp[0][0] = 0;
    dp[0][1] = 0;
    ll i = 1;
    if (ar[1] == 3)
        while (ar[i] == 3 & i <= n)
        {
            i++;
            dp[0][i] = 0, dp[1][i] = 0;
        }
    for (; i <= n; i++)
    {
        if (ar[i] == 1)
        {

            dp[0][i] = 0, dp[1][i] = 1;
            if (dp[0][i - 1] == 0 && dp[1][i - 1] == 1)
            {
                days++;
                dp[1][i] = 0;
            }
        }
        else if (ar[i] == 2)
        {
            dp[0][i] = 1, dp[1][i] = 0;
            if (dp[0][i - 1] == 1 && dp[1][i - 1] == 0)
            {
                days++;
                dp[0][i] = 0;
            }
        }
        else if (ar[i] == 3)
        {
            if (dp[0][i - 1] == 1 && dp[1][i - 1] == 0)
            {
                dp[0][i] = 0;
                dp[1][i] = 1;
                //  debug("in1");
            }
            else if (dp[0][i - 1] == 0 && dp[1][i - 1] == 1)
            {
                dp[0][i] = 1;
                dp[1][i] = 0;
                // debug("in2");
            }
            else if (dp[0][i - 1] == 0 && dp[1][i - 1] == 0)
            {
                dp[0][i] = 0;
                dp[1][i] = 0;
                // debug("in3");
            }
        }
        else
            dp[0][i] = 0, dp[1][i] = 0, days++;
        // cout << days << nn;
    }
    // rep1(i, n) cout << dp[0][i] << ss;
    // cout << nn;
    // rep1(i, n) cout << dp[1][i] << ss;
    // cout << nn;
    cout << days << nn;
    // ll ans2 = INT_MIN;
    // ll zero = 0, one = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // cout << ans[0][i] << nn;
    //     if (ans[0][i] == 1)
    //     {
    //         one++;

    //         ans2 = max(one, max(ans2, zero));
    //         zero = 0;
    //     }
    //     else
    //     {
    //         zero++;
    //         ans2 = max(ans2, max(one, zero));
    //         one = 0;
    //     }
    // }
    // ll ans1 = INT_MIN;
    // ll one1 = 0, zero1 = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // cout << ans[0][i] << nn;
    //     if (ans[1][i] == 1)
    //     {
    //         one1++;

    //         ans1 = max(one1, max(ans1, zero1));
    //         zero1 = 0;
    //     }
    //     else
    //     {
    //         zero1++;
    //         ans1 = max(ans1, max(one1, zero1));
    //         one1 = 0;
    //     }
    // }
    // cout << max(ans2, ans1) << nn;
    return 0;
}