#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v(10, 20);
    cout << v.size() << "\n";

    vector<int> v1;

    v1 = v;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}