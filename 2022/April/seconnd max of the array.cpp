#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 1];
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (mx < array[i]){
            mx = array[i];
        }
    }
    cout << mx << "\n";
    int secondmax = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (secondmax < array[i] && array[i] != mx)
        {
            secondmax = array[i];
        }
    }
    cout << secondmax << "\n";
}