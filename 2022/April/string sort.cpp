#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "zyxkljkkdejkaaaaa";
    // sort(s.begin(), s.end());
    // cout << s;

    vector<string> v;

    v.push_back("a");
    v.push_back("ghf");
    v.push_back("ba");

    // for (auto l : v)
    // {
    //     cout << l << "\n";
    // }

    sort(v.begin(), v.end());

    for (auto l : v)
    {
        cout << l << "\n";
    }
}