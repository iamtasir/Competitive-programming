#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2, s3;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if ('a' > s[i] && s[i] <= 'z')
        {
            s2 += s[i];
        }
        else
        {
            s3 += s[i];
        }
    }
    cout << s2 << "\n";
    cout << s3 << "\n";
}