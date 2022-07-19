#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    int index = unique(s.begin(), s.end()) - s.begin();
    for (int i = 0; i < index; i++)
        cout << s[i];
    cout << "\n";
}