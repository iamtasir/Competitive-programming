#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[100], array1[100];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    int index, value;
    cin >> index >> value;
    // for (int i = 1; i < index; i++)
    //     cout << array[i] << " ";

    // cout << value << " ";

    // for (int i = index; i <= n; i++)
    //     cout << array[i] << " ";
    int newarrayindex = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i != index)
        {
            array1[newarrayindex] = array[i];
            newarrayindex++;
        }
        else
        {
            array1[newarrayindex] = value;
            newarrayindex++;
            array1[newarrayindex] = array[i];
            newarrayindex++;
        }
    }
    for (int i = 1; i <= n + 1; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "\n";
}