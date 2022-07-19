#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (ll i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        // for (auto l : v)
        // {
        //     cout << l << " ";
        // }
        // cout << "\n";

        int uniquelement = unique(v.begin(), v.end()) - v.begin();
        // cout << uniquelement << "\n";
        if (uniquelement == x)
            cout << "Good"
                 << "\n";
        else if (uniquelement > x)
            cout << "Average"
                 << "\n";
        else
            cout << "Bad"
                 << "\n";
    }
}