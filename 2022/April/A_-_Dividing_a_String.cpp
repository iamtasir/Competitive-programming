
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;

    ll n = s.size();
    s += "#";

    string s1 = "#";
    s1 += s;
    s = s1;
    ll ans = 0;
    string prev = "#";
    for (ll i = 1; i <= n; i++)
    {
        string present;
        present += s[i];
        if (present != prev)
            ans++, prev = present;
        else
        {
            if (i != n)
            {
                i++;
                present += s[i];
                ans++;
                prev = present;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
