#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin >> s;
    int n = 1234;

    string s = to_string(n);
    s[0] = '9';

    cout << s << "\n";
}