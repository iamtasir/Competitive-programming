#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int cheak = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            cheak = 0;
        }
        // cout<<s[i]<<" "<<s[n-i-1]<<"\n";
    }

    if (cheak == 0)
    {
        cout << "Not palindrome"
             << "\n";
    }
    else
        cout << "palindrome"
             << "\n";
}