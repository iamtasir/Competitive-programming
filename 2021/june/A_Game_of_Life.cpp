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
//ll ar[MAX];
ll br[MAX];
int main()
{

    //O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        ll x = 0;
        //  ll d = 0;
        ll n, m;
        cin >> n >> m;
        string ar;
        cin >> ar;
        for (ll i = 0; i < n; i++)
        {
            if (ar[i] == '1')
                x++;
        }
        if (x == 0)
        {
            for (ll i = 0; i < n; i++)
                cout << 0;
            cout << nn;
        }
        else if (x == n)
        {
            for (ll i = 0; i < n; i++)
                cout << 1;
            cout << nn;
        }
        else if (n == 2 && x == 1)
        {
            cout << 11 << nn;
        }
        else if (n == 3 && x > 0)
        {

            for (ll i = 0; i < n; i++)
            {
                if (ar[i] == '1')
                    cout << 1;
                else if (m > 0)
                {
                    cout << 1;
                    m--;
                }
                else
                    cout << 0;
            }
        }
        else
        {
            ll d = n - x;
            for (ll i = 0; i < n; i++)
            {
                if (ar[i] == '1' && ar[i + 1] == '0' && ar[i - 1] == '0' && ((ar[i + 2] == '0' && i + 2 < n) || (ar[i - 2] == '0' && i - 2 >= 0)))
                {
                    if (ar[i + 2] == '0')
                    {

                        for (ll j = i + 1, k = 1; k <= m && j < n; j++, k++)
                        {
                            br[j] = 1;
                            d--;
                            if (ar[j + 2] == '1' || j + 2 > n - 1)
                                break;
                            if (d == 0)
                                break;
                        }
                    }

                    if (ar[i - 2] == '0')
                    {

                        for (ll j = i - 1, k = 1; k <= m && j >= 0; k++, j--)
                        {
                            //cout << "i " << i << nn;
                            br[j] = 1;
                            d--;
                            if (ar[j - 2] == '1' || j - 2 < 0)
                                break;
                            if (d == 0)
                                break;
                        }
                    }
                }
            }

            if (d > 0)
            {
                if (ar[n - 1] == '1' && ar[n - 2] == '0' && ar[n - 3] == '0')
                {
                    for (ll j = n - 2, k = 1; k <= m; k++, j--)
                    {
                        br[j] = 1;
                        d--;
                        //  cout << "j " << j << ss << d << nn;
                        if (ar[j - 2] == '1' || j - 2 < 0)
                            break;
                        if (d == 0)
                            break;
                    }
                }
            }
            if (d > 0)
            {
                if (ar[1] == '1' && ar[0] == '0')
                    br[0] = 1;
                d--;
            }

            for (ll i = 0; i < n; i++)
            {
                if (ar[i] == '1' || br[i] == 1)
                    cout << 1;
                else
                    cout << 0;
                br[i] = 0;
            }
            cout << nn;
        }
    }

    //cout << n << nn

    return 0;
}