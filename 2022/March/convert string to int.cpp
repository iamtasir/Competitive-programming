#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << s << "\n";
    int number = stoi(s);
    cout << number << "\n";
    string s2 = to_string(number);
    cout << s2 << "\n";
}