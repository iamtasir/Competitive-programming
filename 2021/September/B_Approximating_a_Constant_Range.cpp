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
ll ar[MAX], br[MAX];
ll dp[MAX][3];
int main()
{
    //O_O ;
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    for (ll i = 1; i < n; i++)
    {
        br[i] = (ar[i + 1] - ar[i]);
    }
    if (n == 2)
    {
        cout << 2 << nn;
        return 0;
    }
    ll ans = 0;
    ll sum = 0;
    ll zero = 0;
    ll temp = 0, temporary = 0;
    ll posindex = 0;
    ll negindex = 0;
    // for (ll i = 1; i < n; i++)
    //     cout << br[i] << ss;
    // cout << nn;
    for (ll i = 1; i < n; i++)
    {

        if (br[i] == -1)
        {
            sum += br[i];
            if (sum == 0)
            {
                ll initial = zero + 2;

                if (temporary == -1)
                    initial += temp, temp = initial;
                else
                    temp = initial;
                zero = 0;
                temporary = -1;
                ans = max(initial, ans);
            }
            else if (sum == -1)
            {
                ll initial = zero + 1;

                if (temporary == +1)
                    initial += temp;
                // temporary = -1;
                ans = max(initial, ans);
            }

            else if (sum < -1)
            {
                sum = -1;
                ll initial = i - negindex;
                ans = max(ans, initial);
                zero = max(0ll, initial - 1);
                temp = max(0ll, initial - 1);

                temporary = 0;
            }
            negindex = i;
        }

        else if (br[i] == 1)
        {
            sum += br[i];
            if (sum == 0)
            {
                ll initial = zero + 2;
                if (temporary == 1)
                    initial += temp, temp = initial;
                else
                    temp = initial;
                zero = 0;
                temporary = +1;
                ans = max(initial, ans);
            }
            else if (sum == 1)
            {
                ll initial = zero + 1;

                if (temporary == -1)
                    initial += temp;
                // temporary = 1;
                ans = max(initial, ans);
            }
            else if (sum > 1)
            {

                ll initial = i - posindex;
                ans = max(ans, initial);
                zero = max(0ll, initial - 1);
                temp = max(0ll, initial - 1);
                temporary = 0;
                sum = 1;
            }
            posindex = i;
        }
        else
        {
            zero++;
            if ((sum == -1 && temporary == +1) || (sum == 1 && temporary == -1))
                ans = max(1 + temp + zero, ans);
            else if (sum == 0)
                ans = max(temp + zero, ans);
            else if (sum == 1)
                ans = max(1 + zero, ans);
            else if (sum == -1)
                ans = max(ans, 1 + zero);
        }
        // cout << "index=" << i << ss << "temp= " << temp << ss << "sum= " << sum << nn;
        // cout << "temporary= " << temporary << ss << "ans= " << ans << ss << "zero= " << zero << nn;
    }

    cout << ans + 1 << nn;

    return 0;
}