#include <bits/stdc++.h>

using namespace std;
int freq[10000];
int main()
{
    int ar[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        cout << ar[i] << "\n";
        int index = ar[i];
        freq[index]++; // taking array value as index
    }
    for (int i = 0; i < 100; i++)
        cout << freq[i] << " ";
    cout << "\n";
}
