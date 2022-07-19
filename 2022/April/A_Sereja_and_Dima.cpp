#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (ll i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    // for (auto l : v)
    //     cout << l << " ";
    // cout << "\n";
    int sreza = 0, dema = 0;
    int turn = 0;

    while (!v.empty())
    {
        if (turn == 0)
        {
            if (v[0] > v.back())
            {
                sreza += v[0];
                v.erase(v.begin());
            }
            else
            {
                sreza += v.back();
                v.pop_back();
            }
            turn = 1;
        }
        else
        {
            if (v[0] > v.back())
            {
                dema += v[0];
                v.erase(v.begin());
            }
            else
            {
                dema += v.back();
                v.pop_back();
            }
            turn = 0;
        }
    }
    cout << sreza << " " << dema << "\n";
}