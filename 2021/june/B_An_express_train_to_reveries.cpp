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
#define mod 1000000007
ll ar[MAX], br[MAX], cr[MAX];
int main()
{
    //O_O ;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    for (ll i = 0; i < n; i++)
        cin >> br[i];
    ll x = 1;
    map<ll, ll> mp;
    ll a = -1, b = -1, index = -1, a1 = -1, b1 = -1, index1 = -1;
    // cout << "in" << nn;
    for (ll i = 0; i < n; i++)
    {
        if (ar[i] == br[i])
            cr[i] = ar[i], mp[ar[i]]++;
    }

    for (ll i = 0; i < n; i++)
    {
        if (ar[i] != br[i] && x == 1)
        {
            if (mp[ar[i]] == 1 || mp[br[i]] == 1)
            {
                if (mp[ar[i]] == 1 && mp[br[i]] == 0)
                    cr[i] = br[i], mp[br[i]]++;
                else if (mp[ar[i]] == 0 && mp[br[i]] == 1)
                    cr[i] = ar[i], mp[ar[i]]++;
            }
            else
                a = ar[i], b = br[i], index = i, x = 0;
        }
        else if (ar[i] != br[i] && x == 0)
        {
            if (mp[ar[i]] == 1 || mp[br[i]] == 1)
            {
                if (mp[ar[i]] == 1 && mp[br[i]] == 0)
                    cr[i] = br[i], mp[br[i]]++;
                else if (mp[ar[i]] == 0 && mp[br[i]] == 1)
                    cr[i] = ar[i], mp[ar[i]]++;
            }
            else
                a1 = ar[i], b1 = br[i], index1 = i;
        }
        // cout << "in" << nn;
    }
    ll c = 0;
    if ((mp[a] == 0 && a != -1) || (mp[b] == 0 && b != -1))
    {
        //cout << mp[a] << ss << mp[b] << nn;
        //cout << index << nn;
        //cout << "in" << nn;
        if (!mp[a])
        {
            cr[index] = a;
            mp[a]++;
            index = -1;
        }
        else if (!mp[b])
        {
            cr[index] = b;
            mp[b]++;
            index = -1;
        }
    }
    //cout << mp[a1] << ss << mp[b1] << nn;
    if ((mp[a1] == 0 && a1 != -1) || (mp[b1] == 0 && b1 != -1))
    {
        //cout << index1 << nn;
        // cout << "in1" << nn;
        if (!mp[a1])
        {
            cr[index1] = a1;
            mp[a1]++;
        }
        else
        {
            cr[index1] = b1;
            mp[b1]++;
        }
    }
    else
        c = 1;
    //cout << "in" << nn;
    for (ll i = 1; i <= n; i++)
    {
        if (!mp[i])
        {
            for (ll j = 0; j < n; j++)
            {
                if (cr[j] == 0)
                {
                    mp[i]++;
                    cr[j] = i;
                    break;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
        cout << cr[i] << ss;
    cout << nn;

    return 0;
}