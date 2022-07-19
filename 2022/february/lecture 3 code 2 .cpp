#include <bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    int maxvalue = 0;
    // cout << maxvalue << "\n";

    for (int i = 1; i <= n; i++)
    {
        if (maxvalue < ar[i])
        {
            maxvalue = ar[i];
        }
    }
    cout << maxvalue << "\n";
}