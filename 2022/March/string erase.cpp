#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2;
    int n = s.size();
    int index;

    cin >> index;
    index--;
    for (int i = 0; i < n; i++)
    {
        if (index != i)
        {
            cout << s[i] << "\n";
            s2 += s[i];
        }
    }
    cout << s2 << "\n";
}