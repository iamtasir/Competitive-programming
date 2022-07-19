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
    int sumrich = 0;
    for (int i = 1; i <= n; i++)
    {
        if (maximum < array[i])
        {

            maximum = array[i];
            sumrich += maximum;
        }
    }

    cout << sumrich << "\n";
}