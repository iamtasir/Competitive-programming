#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        vector<ll> v;
        while (d > 1e5 - 2)
        {
            v.push_back(1e5 - 1);
            v.push_back(1e5);
            v.push_back(1);
            d -= (1e5 - 2);
        }
        v.push_back(d + 1);
        v.push_back(d + 2);
        cout << v.size() << "\n";
        for (auto l : v)
            cout << l << " ";
        cout << "\n";
    }

    return 0;
}