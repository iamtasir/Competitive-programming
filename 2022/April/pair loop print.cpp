#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int n;
    cin >> n;
    int ar[n + 1];
    for (ll i = 0; i < n; i++) ////O(n)
    {
        cin >> ar[i];
    }
    int counter = 0;
    for (ll i = 0; i < n; i++) ////O(n^2);
    {
        for (ll j = i + 1; j < n; j++) /// O(n)
        {
            // cout << ar[i] << " " << ar[j] << "\n";
            for (int k = j + 1; k < n; k++)
            {
                cout << ar[i] << " " << ar[j] << " " << ar[k] << "\n";
                if (ar[i] < ar[j] && ar[j] < ar[k])
                {
                    // cout << ar[i] << " " << ar[j] << " " << ar[k] << "\n";
                    counter++;
                }
            }
        }
    }
    cout << counter << "\n";
}