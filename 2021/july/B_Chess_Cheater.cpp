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

void debug(string s)
{
    cout << s << nn;
}

#define MAX 9000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll ar[MAX], br[MAX];

void calc1(ll n)
{
    for (ll i = 1; i <= n; i++)
        ar[i] = 0, br[i] = 0;
}
void calc(ll n)
{
    ll ans = 0, ans2 = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (ar[i] == 1)
        {
            if (ar[i - 1] == 1)
                ans += 2;
            else
                ans++;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (br[i] == 1)
        {
            if (br[i - 1] == 1)
                ans2 += 2;
            else
                ans2++;
        }
    }
    for (ll i = 1; i <= n; i++)
        ar[i] = 0;
    for (ll i = 1; i <= n; i++)
        br[i] = 0;

    cout << max(ans, ans2) << nn;
}
int main()
{
    //O_O ;
    ll t;
    cin >> t;
    for (ll x = 1; x <= t; x++)
    {
        // cout << x << ss;

        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        //  cout << n << ss << k << s << ss;
        ll zero = 0;
        for (ll i = 1; i <= n; i++)
        {

            if (s[i - 1] == 'W')
                ar[i] = 1, br[i] = 1;
            else
                zero++;
        }
        // for (ll i = 1; i <= n; i++)
        //     cout << ar[i];
        // cout << nn;

        if (k >= zero)
        {
            cout << n * 2 - 1 << nn;
            calc1(n);
        }
        else if (k > 0)
        {

            for (ll i = 2; i <= n; i++)
            {
                if (i == n && ar[i - 1] == 1 && ar[i] == 0)
                {
                    ar[i] = 1, br[i] = 1;
                    k--;
                    zero--;
                }
                else if (ar[i] == 0 && ar[i - 1] == 1 && ar[i + 1] == 1)
                {
                    k--;
                    ar[i] = 1, br[i] = 1;
                    if (k == 0)
                        break;
                }
            }
            // for (ll i = 1; i <= n; i++)
            //     cout << ar[i];
            // cout << nn;

            if (k == 0)
            {
                calc(n);
                // debug("in1");
            }
            else
            {

                map<ll, vector<ll>> mp;
                ll c = 0;
                for (ll i = 1; i <= n; i++)
                {
                    if (ar[i] == 1)
                        c = 1;

                    else if (ar[i] == 0 && c == 1)
                    {
                        ll temp2 = 0;
                        ll index = i;
                        while (ar[i] == 0 && i <= n)
                        {
                            temp2++;
                            i++;
                        }
                        mp[temp2].pb(index);
                    }
                }
                for (auto it = mp.begin(); it != mp.end(); it++)
                {
                    // debug("in");
                    auto v1 = it->second;
                    if (k == 0)
                        break;
                    for (ll i = 0; i < sz(v1); i++)
                    {
                        // cout << it->first << nn;
                        if (k == 0)
                            break;

                        if (it->first > k)
                        {
                            ll k1 = k;
                            for (ll j = v1[i] + it->first - 1; j >= v1[i]; j--)
                            {
                                //  debug("in");

                                ar[j] = 1;
                                k--;
                                zero--;
                                if (k == 0)
                                    break;
                            }
                            for (ll j = v1[i]; j < v1[i] + it->first; j++)
                            {
                                // debug("in1");

                                br[j] = 1;
                                k1--;
                                // zero--;
                                if (k1 == 0)
                                    break;
                            }
                        }
                        else
                        {
                            for (ll j = v1[i]; j < v1[i] + it->first; j++)
                            {
                                // debug("in1");

                                ar[j] = 1, br[j] = 1;
                                k--;
                                zero--;
                                if (k == 0)
                                    break;
                            }
                        }
                    }
                }
                if (k > 0 && zero > 0)
                {
                    ll index = n;
                    for (ll i = 1; i <= n; i++)
                        if (ar[i] == 1)
                            index = i;
                    for (ll i = index - 1; i >= 1; i--)
                    {
                        ar[i] = 1, br[i] = 1, k--;
                        if (k == 0)
                            break;
                    }
                }

                calc(n);
            }
        }
        else
            calc(n);
    }

    return 0;
}