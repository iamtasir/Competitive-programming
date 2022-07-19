#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[100], array2[100], array3[100];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> array1[i];

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> array2[i];
    }

    int array4[100];
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> array3[i];
    }

    for (int i = 1; i <= n; i++)
    {
        array4[i] = array1[i];
    }

    for (int i = n + 1, j = 1; j <= m; i++, j++)
    {

        array4[i] = array2[j];
        ///  cout << i << " " << j << "\n";
    }

    for (int i = n + m + 1, j = 1; j <= k; j++, i++)
    {
        array4[i] = array3[j];
    }

    // i = 1;
    for (int i = 1; i <= n + m + k; i++)
    {
        cout << array4[i] << " ";
    }
}