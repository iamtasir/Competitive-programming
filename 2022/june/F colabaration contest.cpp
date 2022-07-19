#include <bits/stdc++.h>
using namespace std;
#define MAX 400000
#define nn "\n"
#define ll long long
#define ss ' '

ll ar[MAX], tr[4 * MAX + 10];
void build(ll node, ll start, ll end)
{
    if (start == end)
    {
        tr[node] = ar[start];
        return;
    }
    ll mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tr[node] = min(tr[2 * node], tr[2 * node + 1]);
}

ll query(ll node, ll start, ll end, ll i, ll j)
{
    if (start > j || end < i)
    {
        return INT_MAX;
    }
    if (i <= start && j >= end)
    {
        return tr[node];
    }
    ll mid = (start + end) / 2;
    ll left = query(2 * node, start, mid, i, j);
    ll right = query(2 * node + 1, mid + 1, end, i, j);
    return min(left, right);
}

int main()
{

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    // cout << 1 << nn;

    build(1, 1, n);
    // for (ll i = 1; i <= n * 4; i++)
    //     cout << tr[i] << ss;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {

        ll l = 1, r = i - 1;
        ll left = i;

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll mn = query(1, 1, n, mid, r);
            if (mn < ar[i])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
                left = mid;
            }
        }

        l = i + 1, r = n;
        ll right = i;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll mn = query(1, 1, n, l, mid);

            if (mn < ar[i])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
                right = mid;
            }
        }

        ll cnt = i - left + 1;
        sum += (ar[i] * cnt);
        ll ct1 = right - i;
        sum += cnt * (ar[i] * ct1);
    }
    cout << sum << nn;
}
