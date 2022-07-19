#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1 = s;
    cout << s1 << "\n";
    reverse(s.begin(), s.end());
    cout << s << "\n";
    if (s1 != s)
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