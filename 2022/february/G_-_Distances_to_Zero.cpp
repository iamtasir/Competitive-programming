///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
ll ar[MAX];
int main()
{

    ll n;
    cin >> n;
    set<ll> st;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 0)
            st.insert(i);
    }
    ll previndex = INT_MAX;
    auto it = st.begin();
    ll nextindex = *it;
    for (ll i = 1; i <= n; i++)
    {
        if (ar[i] != 0)
        {
            cout << min(abs(previndex - i), nextindex - i) << " ";
        }
        else
        {
            cout << 0 << " ";
            previndex = *it;
            it++;
            nextindex = *it;
            if (it == st.end())
                nextindex = INT_MAX;
        }
    }
    cout << "\n";
    return 0;
}