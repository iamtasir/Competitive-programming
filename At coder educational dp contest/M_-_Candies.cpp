///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:prefix sum korsi optimizew jnne
 ar table build korsi
         ------k--------------------->
  n index"|----0-----1-------2--------3--------4--------5
  |   0   |    1     0       0        0        0        0
  |   1   |    1     1       1        1        1         1
  |   2   |    1     2       3        4        5         6
  |   3   |    1     3       6        10       15        21
  |   4   |    1     4       10        16      26        41
  |   5   |


problem link:https://atcoder.jp/contests/dp/tasks/dp_m

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
#define mod 1000000007
ll dp[102][100005]; /////dp[pos][k=candies number]=number of way save thaktese
ll ar[MAX];
int main()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    for (ll i = 0; i <= n; i++)
    {
        vector<ll> prefix(k + 2);
        if (i > 0)
        {

            prefix[0] = dp[i - 1][0];

            for (ll j = 1; j <= k; j++)
            {
                prefix[j] = (prefix[j - 1] + dp[i - 1][j]) % mod;
            }
        }
        for (ll j = 0; j <= k; j++)
        {
            if (i == 0)
            {
                if (j == 0) /// no variable
                    dp[i][j] = 1;
                else
                    dp[i][j] = 0; /// no soln for positive sum
                continue;
            }
            /// dp[i][j] = dp[i-1][j] + dp[i-1][j-1] + dp[i-1][j-2] + ... + dp[i-1][j-ar[i]]
            /// sum(j-ar[i].....j) = pref[j] - pref[j - ar[i] - 1]
            /// sum(l, r) = pref[r] - pref[l - 1]
            if (ar[i] < j)
                dp[i][j] = (prefix[j] - prefix[j - ar[i] - 1]) % mod;
            else
                dp[i][j] = prefix[j];
            if (dp[i][j] < 0)
                dp[i][j] += mod;
        }
    }
    cout << dp[n][k] << "\n";
    // for (ll i = 0; i <= n; i++)
    //     for (ll j = 0; j <= k; j++)
    //     {
    //         cout << dp[i][j] << ss;
    //         cout << nn;
    //     }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it