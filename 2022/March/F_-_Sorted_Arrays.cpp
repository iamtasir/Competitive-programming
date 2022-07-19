
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX], br[MAX];
int main()
{

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    ll ans = 0;

    for (ll i = 1; i <= n; i++)
    {
        br[i] = ar[i] - ar[i - 1];
    }
    ll c = 0;
    for (ll i = 1; i <= n;)
    {
        if (c == 0)
        {
            c = 1;
            ans++;
            i++;
        }
        else
        {
            if (br[i] == 0)
            {
                while (br[i] == 0 && i <= n)
                {
                    i++;
                }
            }
            if (br[i] >= 0)
            {
                while (br[i] >= 0 && i <= n)
                {
                    i++;
                }
            }
            else if (br[i] <= 0)
            {
                while (br[i] <= 0 && i <= n)
                {
                    i++;
                }
            }
            if (br[i] == 0)
            {
                while (br[i] == 0 && i <= n)
                {
                    i++;
                }
            }

            c = 0;
        }
    }
    cout << ans << "\n";

    return 0;
}
