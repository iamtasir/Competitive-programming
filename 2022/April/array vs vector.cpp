#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v; /// declare

    int n;
    cin >> n;

    // v.push_back(2);
    // v.push_back(3);/// size 2
    // v.push_back(4);  // size 3
    // v.push_back(5);  /// size 4
    // v.push_back(6); // size 5

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    v.push_back(100);
    v[6] = 2000;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.clear();
    cout << "\n\n";

    int x = v.size();
    cout << x << "\n";

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
}