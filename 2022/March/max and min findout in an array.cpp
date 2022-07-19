#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[100];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int maximum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (maximum < array[i])
        {
            maximum = array[i];
        }
    }
    int minimum = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (minimum > array[i])
        {
            minimum = array[i];
        }
    }

    cout << minimum << "\n";
}