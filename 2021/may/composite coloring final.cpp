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
#define MAX 1001
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll ar[MAX], br[MAX], cr[MAX];
int main()
{
    //O_O ;

    vector<ll> div[MAX];

    //  for (ll i = 0; i < 10; i++)
    /// {
    //  cout << div[i].<< nn;
    // }
    br[13] = 1, br[17] = 4, br[19] = 6, br[23] = 8, br[29] = 9, br[31] = 10;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            vector<ll> v;
            for (int k = 2; k <= sqrt(ar[i]); k++)
            {
                if (ar[i] % k == 0)
                {

                    if (k > 11)
                    {
                        ar[i] = br[k];
                    }
                    else
                        ar[i] = k;
                    st.insert(ar[i]);
                    break;
                }
            }
        }
        ll j = 1;
        for (auto it = st.begin(); it != st.end(); ++it)
        {
            for (ll i = 0; i < n; i++)
                if (ar[i] == *it)
                    cr[i] = j;
            j++;
        }
        cout << st.size() << nn;
        for (ll i = 0; i < n; i++)
            cout << cr[i] << ss;

        cout << nn;
    }

    return 0;
}