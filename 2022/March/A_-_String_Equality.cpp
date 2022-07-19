#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 1000005
#define mod 1000000007
ll ar[MAX], br[MAX];
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        for (ll i = 0; i < n; i++)
        {
            ar[s1[i] - 97]++;
            br[s2[i] - 97]++;
        }
        ll c = 1;
        for (ll i = 0; i < 26; i++)
        {
            if (ar[i] < br[i])
                c = 0;
            ll d = ar[i] - br[i];
            if (d % k != 0)
                c = 0;
            ar[i + 1] += d;
            ar[i] = 0;
            br[i] = 0;
        }
        if (c)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
