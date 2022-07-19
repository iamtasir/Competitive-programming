#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // int x = 0;
    bool x = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            x = false;
        }
    }
    if (x == false)
    {
        cout << "Not palindrome"
             << "\n";
    }
    else
    {
        cout << "Palindrome"
             << "\n";
    }
}