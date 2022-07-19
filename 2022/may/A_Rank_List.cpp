#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second < b.second;
}
int main()
{

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        mp[{x, y}]++;
    }
    sort(v.begin(), v.end(), comp);
    // reverse(v.begin(), v.end());

    pair<int, int> p1;
    p1 = v[k - 1];
    cout << mp[p1] << "\n";
    // for (auto l : v)
    //     cout << l.first << " " << l.second << "\n";
}