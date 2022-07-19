#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll a, b;
    cin >> a >> b;
    ll temp = a - 1, temp2 = b - 1;
    for (ll i = 1; i <= temp; i++)
        cout << i << " ";
    for (ll i = 1; i <= temp2; i++)
        cout << -i << " ";
    ll temp3 = 1e4 + 10 + ((temp2 * (temp2 + 1)) / 2);
    ll temp4 = -1e4 - 10 - ((temp * (temp + 1)) / 2);
    cout << temp3 << " " << temp4 << "\n";
    return 0;
}
