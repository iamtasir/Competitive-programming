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
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
string s[1000];
string s1[1000];
ll ar[MAX];
int main()
{
    //O_O ;
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> s[i];
        mp[sz(s[i])]++;
    }
    set<ll> st, st1;
    ll a = 0;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ar[i] = x;
        ll z = sz(s[x]);

        st.insert(z);
        st1.insert(x);
        s1[a++] = s[x];
    }
    // for (auto it = st1.begin(); it != st1.end(); it++)
    //   cout << *it << ss;
    if (k == 1)
    {
        yes;
        cout << s[ar[0]] << nn;
        return 0;
    }
    if ((ll)st.size() != 1ll)
        no;
    else
    {
        if (n == k)
        {
            yes;
            for (ll i = 1; i <= *st.begin(); i++)
                cout << "?";
            cout << nn;
            return 0;
        }
        string s2;
        // for (ll i = 0; i < k; i++)
        // {
        //   for (ll j = 0; j < s1[i].size(); j++)
        //     cout << s1[i][j];
        // cout << nn;
        // }
        ll c = 0;
        for (ll i = 0; i < (ll)*st.begin(); i++)
        {
            ll x = 0;
            //char c;
            for (ll j = 1; j < k; j++)
            {
                // cout << s1[i][j] << ss;
                if (s1[j][i] == s1[j - 1][i])
                {
                    // cout << s1[i][j] << ss;

                    continue;
                }
                else
                    x = 1;
            }
            if (x)
                s2 += '?', c++;
            else
                s2 += s1[0][i];
        }
        //  cout << mp[*st.begin()] << nn;
        if (c == *st.begin() && mp[*st.begin()] != k)
            no;
        else
        {
            ll p = 1;
            for (ll i = 1; i <= n; i++)
            {
                if (sz(s[i]) == sz(s2) && (st1.find(i) == st1.end()))
                {
                    // cout << s[i] << nn;

                    ll q = 1;
                    for (ll j = 0; j < sz(s2); j++)
                    {
                        if (s2[j] == '?')
                            continue;
                        if (s[i][j] != s2[j])
                        {
                            q = 0;
                            break;
                        }
                    }
                    if (q)
                    {
                        p = 0;
                        break;
                    }
                }
            }
            //   cout << s2 << nn;
            if (p)
            {
                yes;
                cout << s2 << nn;
            }
            else
                no;
        }
        st.clear();
    }

    return 0;
}