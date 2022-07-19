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
    // sort(array + 1, array + n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[i] > array[j])
                cout << array[i] << " " << array[j] << "\n";
        }
    }
}