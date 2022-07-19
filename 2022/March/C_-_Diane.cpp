#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "a"
                 << "\n";
        }
        else
        {
            if (n & 1)
            {
                cout << "c";
                n--;
            }
            for (ll i = 1; i <= n / 2; i++)
                cout << "a";
            cout << "b";
            for (ll i = 1; i < n / 2; i++)
                cout << "a";
            cout << "\n";
        }
    }

    return 0;
}