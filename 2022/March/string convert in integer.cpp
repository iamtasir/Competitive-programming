#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int number = 0;
    int x = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        number += (s[i] - 48) * (x);
        // cout << number << "\n";
        x *= 10;
    }
    cout << number << "\n";
}