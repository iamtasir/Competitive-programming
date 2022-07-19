#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
long long ar[MAX];
int main()
{
    long long n, k;
    cin >> n >> k;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i <= n; i++)
        ar[i] += ar[i - 1];
    for (int i = k; i <= n; i++)
    {
        sum += (ar[i] - ar[i - k]);
    }
    long double ans = (sum / ((long double)(n - k + 1)));
    cout << fixed << setprecision(10);
    cout << ans << "\n";

    return 0;
}
