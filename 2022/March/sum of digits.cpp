#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int x = 1;
    while (x <= n)
    {
        int temp = n / x;
        int temp2 = temp % 10;
        sum += temp2;
        x = x * 10;
        cout << sum << "\n";
    }
    cout << sum << "\n";
}