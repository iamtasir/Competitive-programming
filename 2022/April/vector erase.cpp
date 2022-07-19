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
    v.erase(v.begin() + 3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}