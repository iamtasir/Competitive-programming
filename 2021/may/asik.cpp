#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;

        for (ll i = 1; i <= n; i++)
        {
            stringstream ss;
            ss << i;
            string s;
            ss >> s;

            string l = s;
            reverse(s.begin(), s.end());

            string u = s;
            if (u.compare(l) == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}