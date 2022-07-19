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

void debug(ll s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll ar[MAX];
int main()
{
    //O_O ;
    vector<ll> v1{4, 8, 15, 16, 23, 42};
    map<ll, ll> mp2;
    for (ll i = 0; i <= 5; i++)
        mp2[v1[i]] = i;
    //  ll c = 7;
    vector<set<ll>> v(6);
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
        ll index = mp2[ar[i]];
        v[index].insert(i);
    }
    // rep(i, 6)
    // {
    //     auto x = v[i];
    //     print(x);
    //     cout << nn;
    // }
    ll ans = 0;
    ll x = 1;
    while (x == 1)
    {

        auto &st = v[0];

        if (sz(st) == 0)
        {
            x = 0;
            break;
        }
        ll prev = *st.begin();
        st.erase(prev);
        //v[0] = st;

        for (ll i = 1; i <= 5; i++)
        {

            auto &st1 = v[i];
            if (sz(st1) == 0)
            {
                x = 0;
                break;
            }
            ll prev1 = *st1.begin();
            st1.erase(prev1);
            while (prev1 < prev && sz(st1) > 0)
            {
                prev1 = *st1.begin();
                st1.erase(prev1);
            }
            //  v[i] = st1;
            if (prev1 < prev)
            {
                x = 0;
                break;
            }
            else
                prev = prev1;
        }
        if (x == 0)
        {
            break;
        }
        else
            ans += 6;
    }
    cout << n - ans << nn;

    return 0;
}