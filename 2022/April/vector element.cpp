#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << v.size() << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << "\n";
    v.begin();
    cout << *v.begin() << "\n";
    v.rbegin();
    cout << *v.rbegin() << "\n";

    // cout << v[0] << "\n";
}