#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // char ch;
    // cin >> ch;
    // cout << (int)ch << "\n";

    for (char i = 'A'; i <= 'Z'; i++)
        cout << (int)i << " ";

    char ch;
    cin >> ch;
    int temp = ch - 64;
    cout << temp << "\n";
}