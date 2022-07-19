#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{
    ll n;
    cin >> n;
    ll x = 0;
    set<ll> st1, st2, st3;
    for (ll i = 0; i <= n + 1; i++)
        st1.insert(i), st2.insert(i);
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (ar[i] > i)
            x = 1;
    }
    if (x)
        cout << -1 << "\n";
    else
    {

        for (ll i = 0; i <= n + 1; i++)
        {
            st2.erase(ar[i]);
            st3.insert(ar[i]);
        }
        auto it = st1.rbegin();
        auto xt = st2.begin();
        for (ll i = 1; i <= n; i++)
        {
            if (ar[i] == ar[i - 1])
            {
                cout << *st2.begin() << " ";
                st2.erase(st2.begin());
            }
            else
            {
                st2.insert(ar[i - 1]);
                cout << *st2.begin() << " ";
                st2.erase(ar[i - 1]);
            }
        }
    }
    return 0;
}
