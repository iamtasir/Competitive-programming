#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int x = 10;
    string s;
    while (number > 0)
    {
        int temp = number % 10;
        // cout << "temp=" << temp << "\n";
        s += (temp + '0'); /// convert in charecter
        // cout << s << "\n";
        number /= 10;
        //  cout << "number=" << number << "\n";
    }
    //  cout << s << "\n";
    reverse(s.begin(), s.end());

    cout << *s.begin() << "\n";
    cout << *s.rbegin() << "\n";
    //  cout << s << "\n";
}