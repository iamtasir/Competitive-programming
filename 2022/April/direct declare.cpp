#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v(10);
    cout << v.size() << "\n";

    v[4] = 5;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}