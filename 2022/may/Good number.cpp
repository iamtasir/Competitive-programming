#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // O_O ;
    string s;
    cin >> s;
    ll n = s.size();
    ll val = 0;
    for (ll i = 0; i < n; i++)
        val += (s[i] - 48);
    if (val % 3 == 0)
        cout << "Good"
             << "\n";
    else
        cout << "Bad"
             << "\n";
    return 0;
}