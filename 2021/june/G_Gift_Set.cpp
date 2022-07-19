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
#define mod 1000000000
int main()
{
    //O_O ;
    ll t;
    cin >> t;
    // cout << "in" << nn;
    while (t--)
    {
        //cout << "IN" << nn;

        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        //  cout << "in" << nn;
        ll low = 0, high = 1e9;
        //  cout << low << ss << high << nn;
        if (a <= b)
            swap(a, b);
        if (x <= y)
            swap(x, y);
        ll ans = 0;
        //cout << low << ss << high << nn;
        if (a == b)
        {
            cout << y / a << nn;
            continue;
        }

        while (low <= high)
        {
            //cout << "in" << nn;
            ll mid = (low + high) / 2;
            //  cout << mid << nn;
            ll temp = x - mid * b, temp2 = y - mid * b;
            //    cout << temp << ss << temp2 << ss;
            if (a == b && temp >= 0 && temp2 >= 0)
            {
                ans = mid, low = mid + 1;
                //  cout << "in1" << nn;
            }
            else if ((temp / (a - b)) + (temp2 / (a - b)) >= mid && temp >= 0 && temp2 >= 0 && a != b)
            {
                low = mid + 1, ans = mid;
                // cout << "in2" << nn;
            }
            else
            {
                high = mid - 1;
                // cout << "in3" << nn;
                //  cout << high << nn;
            }
        }
        cout << ans << nn;
    }

    return 0;
}