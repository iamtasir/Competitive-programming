#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 10];
    array[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    for (int i = 2; i <= n; i++)
    {
        array[i] += array[i - 1];
        cout << array[i] << " ";
    }
    cout << "\n";

    int query;
    cin >> query;
    for (int i = 1; i <= query; i++)
    {
        int left, right;
        cin >> left >> right;
        cout << array[right] - array[left - 1] << "\n";
    }
}