#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y;
    cin >> x >> y;
    int array[x + 1][y + 1];
    for (int i = 1; i <= x; i++)
    {

        for (int j = 1; j <= y; j++)
        {
            // cout << i << "," << j << "     ";
            cin >> array[i][j];
        }
        cout << "\n";
    }

    for (int i = 1; i <= x; i++) ///// print 2d array
    {
        for (int j = 1; j <= y; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}