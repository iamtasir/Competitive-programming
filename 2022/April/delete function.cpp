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
    v.back();
    cout << v.back() << "\n";

        v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    v.back();
    cout << v.back() << "\n";
}