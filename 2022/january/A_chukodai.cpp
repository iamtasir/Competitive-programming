#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a, b, i;
    cin >> a >> b;

    swap(s[a - 1], s[b - 1]);
    cout << s << endl;
    return 0;
}