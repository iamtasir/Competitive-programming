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

    int x1, y1;
    cin >> x1 >> y1;
    int array2[x1 + 1][y1 + 1];
    for (int i = 1; i <= x1; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cin >> array2[i][j];
        }
    }

    int array3[x + 1][y + 1];
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            array3[i][j] = (array[i][j] * array2[i][j]);
        }
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << "\n";
    }
}
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// 3 3
// 1 2 3
// 4 5 6
// 7 8 9