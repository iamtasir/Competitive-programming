#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    long long number = 0, ans = 0, right = 1;

    for (int left = 1; left <= n; left++)
    {
        while (number + ar[right] == (number ^ ar[right]) && right <= n) // how many consecutive numbers follow the conditon
        {
            number += ar[right];
            right++;
        }
        ans += right - left;
        if (left == right)
            right++;
        else
            number -= ar[left];
    }
    cout << ans << "\n";

    return 0;
}
