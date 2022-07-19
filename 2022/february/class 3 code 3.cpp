#include <bits/stdc++.h>
using namespace std;
int ar[10000];
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x == ar[i])
            cnt++;
    }
    cout << cnt << "\n";
}

name codeforces
    div 3 contest
        atcoder problem site
            you tube channel list
