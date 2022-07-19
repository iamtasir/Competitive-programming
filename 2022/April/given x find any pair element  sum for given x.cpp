#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, X;
    cin >> n >> X;
    int array[n + 10];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int cheak = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[i] + array[j] == X)
            {
                cout << array[i] << " " << array[j] << "\n";
                cheak = 1;
            }
        }
    }
    if (cheak == 0)
        cout << -1 << "\n";
}