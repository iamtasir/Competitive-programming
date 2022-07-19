#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    if (n == 1)
    {
        cout << ar[1] << "\n";
        return 0;
    }
    sort(ar + 1, ar + n + 1);
    ll mediun = (n + 1) / 2;
    ll dis1 = 0, dis2 = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i != mediun)
            dis1 += abs(ar[i] - ar[mediun]);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (i != mediun - 1)
            dis2 += abs(ar[i] - ar[mediun - 1]);
    }
    if (dis1 >= dis2 && n > 2)
        cout << ar[mediun - 1] << "\n";
    else
        cout << ar[mediun] << "\n";

    return 0;
}