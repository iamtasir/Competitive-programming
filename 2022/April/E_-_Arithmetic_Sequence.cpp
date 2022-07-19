#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    ll a11 = a1, a33 = a3, a22 = a2;
    a22 *= 2;
    a11 += a33;
    if (a22 >= a11)
    {
        cout << a22 - a11 << "\n";
    }
    else
    {
        ll temp = a1 + a3 - a22;
        ll ans = 0;
        if (temp & 1)
            ans++;
        cout << (temp + 1) / 2 + ans << "\n";
    }

    return 0;
}
/// 1 2 4
///  2