#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.length();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = s[i] - 48;
        sum += temp;
        cout << temp << "\n";
    }
    cout << sum << "\n";
}