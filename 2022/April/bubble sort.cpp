#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 10];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[j] < array[i])
            {
                swap(array[i], array[j]);
                // for (int i = 1; i <= n; i++)
                // {
                //     cout << array[i] << " ";
                // }
                // cout << "\n";
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}
