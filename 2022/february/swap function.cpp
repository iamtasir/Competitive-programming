#include <bits/stdc++.h>

using namespace std;
int main()
{

    int x, y;
    cin >> x >> y; // x=10,y=15
    // swap(x, y);
    int temp = x;
    x = y; //// x=15
    y = temp;

    cout << x << " " << y << "\n";
}
