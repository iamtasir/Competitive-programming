#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2;
    int n = s.size();
    int left, right;
    cin >> left >> right;
    left--;
    right--;
    for (int i = 0; i < n; i++)
    {
        if (i >= left && i <= right)
        {
            cout << s[i] << "\n";
        }
        else
            s2 += s[i];
    }
    cout << s2 << "\n";
}