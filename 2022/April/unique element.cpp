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
    sort(v.begin(), v.end());
    int n2 = unique(v.begin(), v.end()) - v.begin();

    for (int i = 0; i < n2; i++)
    {
        cout << v[i] << " ";
    }
}