#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;

        int array[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> array[i];
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (array[j] < array[i])
                {
                    swap(array[i], array[j]);
                    cnt++;
                }
            }
        }

        cout << "Minimum exchange operations : " << cnt << "\n";
    }
}
