///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:
 problem link:https://lightoj.com/problem/conquering-keokradong
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 4;
ll n, k;
ll ar[N];
ll cnt[N];
ll k1;
vector<ll> v, v1;
ll ok(ll dis)
{
    ll intial = 0;
    k1 = k;
    ll cn = 0;
    ll pos = 0;
    v.clear();
    // v.push_back(0);
    for (ll i = 1; i <= n; i++)
    {
        if (cnt[i] - intial <= dis and pos < i)
        {
            // if (dis == 8)
            //  cout << i << ' ' << cnt[i] << '\n';
            cn++;
            ll l = i;
            while (l <= n and cnt[l] - intial <= dis)
                l++;
            if (l == n and cnt[l] - intial > dis)
                l--;
            else
                l--;
            intial = cnt[l];

            pos = l;
            v.push_back(pos);
            if (cn == k1)
                break;
            // cout << k1 << "\n";
        }
    }
    if (cn <= k1 and pos == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    ll t;
    cin >> t;
    for (ll ts = 1; ts <= t; ts++)
    {
        cin >> n >> k;
        n++;
        k++;
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
            cnt[i] += ar[i];
            cnt[i] += cnt[i - 1];
            // cout << cnt[i] << "\n";
        }
        ll l = 0;
        ll r = 1e10;
        ll ans = r;
        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if (ok(mid))
            {
                // cout << mid << "\n";
                ans = min(ans, mid);
                r = mid - 1;
                v1 = v;
            }
            else
                l = mid + 1;
        }
        // for (auto l : v1)
        //     cout << l << " ";
        // cout << "\n";
        cout << "Case " << ts << ": " << ans << "\n";

        for (int i = 1; i <= n; i++)
        {
            ll sum = ar[i];
            k--;

            while (i + 1 <= n - k and sum + ar[i + 1] <= ans)
            {
                sum += ar[i + 1];
                i++;
                /* code */
            }

            cout << sum << "\n";
        }
        for (ll i = 0; i <= n; i++)
        {
            ar[i] = 0;
            cnt[i] = 0;
        }
    }
}