
#include <bits/stdc++.h>
using namespace std;
typedef int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll cs = 1;
    while (t--)
    {
        cout << "Case " << cs++ << ":"
             << "\n";
        ll n, q;
        cin >> n >> q;
        deque<ll> dq;
        // vector<ll> dq;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        ll l = dq.size();
        while (q--)
        {

            char c;
            cin >> c;
            ll index;
            cin >> index;
            if (c == 'a')
            {
                dq.push_back(index);
                l++;
            }
            else
            {
                if (index > l)
                    cout << "none"
                         << "\n";
                else
                {
                    cout << dq[index - 1] << "\n";
                    dq.erase(dq.begin() + (index - 1));
                    l--;
                }
            }
        }
    }

    return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it