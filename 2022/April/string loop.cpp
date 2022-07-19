#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "rahim";

    int sz = s1.size();
    cout << sz << "\n";

    for (int i = 0; i < sz; i++)
        cout << s1[i];
    cout << "\n";

    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it;
    }
    cout << "\n";

    for (auto l : s1)
    {
        cout << l;
    }
    cout << "\n";
}