#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {2, 4, 6}; /// declare

    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}