#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int array[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (array[i] == x)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}