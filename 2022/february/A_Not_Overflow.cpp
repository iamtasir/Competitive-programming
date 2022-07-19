#include <bits/stdc++.h>

using namespace std;
int main()
{

    long long int number;
    cin >> number;
    // cout << pow(-2, 31);

    if (number >= pow(-2, 31) && number <= pow(2, 31) - 1)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
    //     int ar[100];
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> ar[i];
    //         cout << ar[i] << "\n";
    //         int index = ar[i];
    //         freq[index]++;
    //     }
    //     for (int i = 0; i < 100; i++)
    //         cout << freq[i] << " ";
    //     cout << "\n";
}
