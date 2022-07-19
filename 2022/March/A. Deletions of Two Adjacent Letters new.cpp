#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        string s;
        cin >> s;
        char ch;
        cin >> ch;
        int sz = s.size();
        int cheak = 0;
        for (int i = 0; i < sz; i += 2)
        {
            if (s[i] == ch)
            {
                cheak = 1;
            }
        }

        if (cheak == 0)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
}