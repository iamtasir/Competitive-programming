#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll left = 0, right = 0, up = 0, down = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            left++;
        else if (s[i] == 'R')
            right++;
        else if (s[i] == 'D')
            down++;
        else
            up++;
    }
    cout << 2 * min(left, right) + 2 * min(up, down) << "\n";

    return 0;
}
