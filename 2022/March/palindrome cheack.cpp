#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 10];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int cheak = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (array[i] != array[n - i + 1])
        {
            cheak = 0;
        }
    }

    if (cheak == 0)
    {
        cout << "Not palindrome"
             << "\n";
    }
    else
        cout << "palindrome"
             << "\n";
}