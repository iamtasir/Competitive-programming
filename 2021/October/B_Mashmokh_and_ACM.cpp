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
#define O_O                         \
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
#define print(v) \
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

#define MAX 2005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
ll dp[MAX][MAX];
int main()
{
  //O_O ;
  ll n, k;
  cin >> n >> k;
  for (ll i = 1; i <= n; i++)
  {
    dp[1][i] = 1;
  }
  for (ll i = 1; i < k; i++)
  {
    for (ll j = 1; j <= n; j++)
    {
      for (ll l = j; l <= n; l += j)
      {

        cout << "dp[" << i + 1 << "][" << l << "]=(dp[" << i + 1 << "][" << l << "]+dp[" << i << "][" << j << "])%" << mod << nn;
        cout << dp[i][j] << nn;
        if (dp[i][j])
        {
          //cout << dp[i + 1][l] << ss << dp[i][j] << nn;
          dp[i + 1][l] = (dp[i + 1][l] + dp[i][j]) % mod;
          //    cout << dp[i + 1][l] << ss << dp[i][j] << nn;
          //  cout << "dp[" << i + 1 << "][" << l << "]=(dp[" << i + 1 << "][" << l << "]+dp[" << i << "][" << j << "])%" << mod << nn;
        }
      }
    }
  }
  for (ll i = 1; i <= n; i++)
    cout << dp[k][i] << ss;

  return 0;
}