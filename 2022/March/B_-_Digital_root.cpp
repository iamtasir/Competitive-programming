#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {

        ll k, value;
        cin >> k >> value;
        cout << value + (k - 1) * 9 << "\n";
    }

    return 0;
}