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
    int maximum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        maximum = max(maximum, array[i]);
    }

    cout << maximum << "\n";

    int minimum = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        minimum = min(minimum, array[i]);
    }

    cout << minimum << "\n";
}