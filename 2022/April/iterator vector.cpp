#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    // cout << v.size() << "\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    // vector<int>::iterator xx;
    // cout << *xx << "\n";

    //     auto x = v.begin();
    //    cout << *x << "\n";

    for (auto it = v.begin(); it != v.end(); it++)

    {
        cout << *it << "\n";
    }
}