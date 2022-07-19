#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int start, end;
    cin >> start >> end;
    for (int x = start; x <= end; x++)
    {

        for (int i = 1; i <= 10; i++)
        {
            // cout << "i= " << i << "\n";
            cout << x << " X " << i << " = " << i * x << "\n";
        }
        cout << "\n";
    }
}