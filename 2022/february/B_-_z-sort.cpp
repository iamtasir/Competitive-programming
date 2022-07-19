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
    {
        cin >> ar[i];
    }
    sort(ar + 1, ar + n + 1);
    ll i = 1, j = n;
    while (i <= j)
    {
        if (i == j)
        {
            cout << ar[i] << " ";
            break;
        }
        else
        {
            cout << ar[i++] << " " << ar[j--] << " ";
        }
    }
    cout << "\n";

    return 0;
}