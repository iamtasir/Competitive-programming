#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    vector<pair<char, int>> v;

    for (int i = 0; i < 5; i++)
    {
        pair<char, int> p1;
        char x;
        int y;
        cin >> x >> y;
        p1 = {x, y};
        v.push_back(p1);
    }

    for (auto l : v)
    {
        cout << l.first << " " << l.second << "\n";
    }
}