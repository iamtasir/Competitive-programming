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

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007

int main()
{
    string s;
    cin >> s;
    int i;
    cin >> s;
    cout << "Variables:s and i" << endl;
    for (i = 0; i < sz(s); i++)
    {
        if (s[i] == '-' || s[i] == '+' || s[i] == '/' || s[i] == '*' || s[i] == '=')
            cout << "Operator: " << s[i] << endl;

        else if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
            cout << "Constants: " << s[i] << endl;
        else if (s[i] == ',' || s[i] == ';' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '"')
            cout << "Special Symbols: " << s[i] << endl;

        else if (s[i] == 'i' && s[i + 1] == 'f' && s[i + 2] == 'e' && s[i + 3] == 'l' && s[i + 4] == 's' && s[i + 5] == 'e')
            cout << "Keywords:else if" << nn, i += 5;
        else if (s[i] == 'p' && s[i + 1] == 'r' && s[i + 2] == 'i' && s[i + 3] == 'n' && s[i + 4] == 't' && s[i + 5] == 'f')
            cout << "Keywords:printf" << nn, i += 5;
        else if (s[i] == 'i' && s[i + 1] == 'f')
            cout << "Keywords: if" << nn, i += 1;
        else if (s[i] == 'c' && s[i + 1] == 'i' && s[i + 2] == 'n')
            cout << "Keywords: cin" << nn, i += 2;
        else if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'u' && s[i + 3] == 't')

            cout << "Keywords: cout" << nn, i += 3;
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] <= 'A' && s[i] >= 'Z'))
            cout << "char " << s[i] << endl;
        //   if ()
    }
    //cout << "Keywords:  if then else if then else if" << nn;

    // cout<<"Variables: a[3] t1 t2 t3"<<endl;
    // cout<<"Operator: - + * / >"<<endl;
    // cout<<"Constants: 2 1 3 6 5 99 -25"<<endl;
    // Keywords: int if then else endif
    // Special Symbols: , ; ( ) { }

    return 0;
}