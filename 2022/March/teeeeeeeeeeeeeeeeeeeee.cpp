#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 3;
ll cnt[2 * N];
int main()
{

    ll i, j, l, n, m, x, ans = 0;
    cin >> n >> m;
    l = n + n;
    cnt[0] = cnt[1] = 0;
    for (i = 2; i <= l; i++)
    {
        if (i % 2 == 0)
        {
            cnt[i]++;
            x = min((i / 2) - 1, (n - (i / 2)));
            cnt[i] += (x + x);
        }
        else
        {
            x = min((i / 2), n - (i / 2));
            cnt[i] += (x + x);
        }
    }
    for (i = 2; i <= l; i++)
    {
        if (i - m >= 0 && i - m <= l)
            ans += cnt[i] * cnt[i - m];
    }
    cout << ans << "\n";
    return 0;
}
