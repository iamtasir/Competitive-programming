
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 100005
#define mod 1000000007
string s[MAX];
bool cmp(string a, string b)
{
    return a + b < b + a;
}
int main()
{

    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n, cmp);

    for (ll i = 0; i < n; i++)
        cout << s[i];
    cout << "\n";

    return 0;
}
