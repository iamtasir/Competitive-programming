///*    ***Bismillahir Rahmanir Rahim***   */

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
ll pow1(ll a, ll b)
{
    ll ans = a;
    for (ll i = 2; i <= b; i++)
        ans *= a;
    return ans;
}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    //O_O ;
    ll n;
    cin >> n;
    ll x = n * 5;
    ll low = 0;
    ll high = x;
    ll ans1 = 1e7;
    while (low <= high)
    {

        ll mid = (low + high) / 2;
        // cout << mid << nn;
        ll t = 0;
        // cout << "low " << low << " high " << high << nn;
        for (ll i = 1; i <= 9; i++)
        {
            ll temp = pow1(5, i);
            if (temp <= mid)
            {
                t += (mid / temp);
            }
            else
                break;
        }
        if (t >= n)
        {
            ans1 = mid;
            high = mid - 1;
        }
        else if (t < n)
            low = mid + 1;
    }
    //  cout << "ans1 " << ans1 << nn;
    ll t1 = 0;
    for (ll i = 1; i <= 9; i++)
    {
        ll temp = pow1(5, i);

        if (temp <= ans1)
        {
            ll d = (ans1 / temp);
            //    cout << "temp " << ss << temp << nn;
            t1 += d;
            //  cout << "t1 " << t1 << nn;
        }
        else
            break;
    }
    if (t1 == n)
    {
        cout << 5 << nn;
        for (ll i = 0; i < 5; i++)
            cout << low + i << ss;
        cout << nn;
    }
    else
        cout << 0 << nn;

    return 0;
}