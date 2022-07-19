#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    vector<pair<string, string>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<string, string> p1;
        string x, y;
        cin >> x >> y;
        p1 = {x, y};
        v.push_back(p1);
    }
    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    cout << sz << "\n";
    // for (auto l : v)
    // {
    //     cout << l.first << " " << l.second << "\n";
    // }
}