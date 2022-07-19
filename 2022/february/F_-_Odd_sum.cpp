#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> negativeodd, postiveodd;
    ll ans = 0;
    ll oddminvalnegative = INT_MIN;
    ll oddminposvalue = INT_MAX;
    for (ll i = 1; i <= n; i++)
    {
        ll temp;
        cin >> temp;
        if (temp & 1)
        {
            if (temp > 0)
            {
                postiveodd.push_back(temp);
                ans += temp;
                oddminposvalue = min(oddminposvalue, temp);
            }
            else
            {
                negativeodd.push_back(temp);
                oddminvalnegative = max(oddminposvalue, temp);
            }
        }
        else
        {
            if (temp > 0)
                ans += temp;
        }
    }
    sort(postiveodd.begin(), postiveodd.end());
    sort(negativeodd.begin(), negativeodd.end());
    reverse(negativeodd.begin(), negativeodd.end());
    if ((ll)postiveodd.size() % 2 == 0)
    {
        if ((ll)postiveodd.size() == 0)
            ans += negativeodd[0];
        else if ((ll)negativeodd.size() != 0)
        {
            ans = max(ans - postiveodd[0], ans + negativeodd[0]);
        }
        else
            ans -= postiveodd[0];
    }
    cout << ans << "\n";

    return 0;
}