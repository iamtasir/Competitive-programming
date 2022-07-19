
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char ch[20][20];
ll cal(ll i, ll j)
{
    ll ans = -1;
    if (1 <= i && i <= 10 && 1 <= j && j <= 10)
    {
        if (ch[i][j] == '.')
            ans = 0;
        else if (ch[i][j] == 'X')
            ans = 1;
    }
    return ans;
}
int main()
{
    for (ll i = 1; i <= 10; i++)
        for (ll j = 1; j <= 10; j++)
            cin >> ch[i][j];
    ll x = 0;
    for (ll i = 1; i <= 10; i++)
    {
        for (ll j = 1; j <= 10; j++)
        {
            if (ch[i][j] == '.')
            {
                ll horizontal = cal(i, j + 1) + cal(i, j + 2) + cal(i, j - 1) + cal(i, j - 2);
                ll vertical = cal(i + 1, j) + cal(i + 2, j) + cal(i - 1, j) + cal(i - 2, j);
                ll diagonal = cal(i + 1, j + 1) + cal(i + 2, j + 2) + cal(i - 1, j - 1) + cal(i - 2, j - 2);
                ll diagonal2 = cal(i + 1, j - 1) + cal(i + 2, j - 2) + cal(i - 1, j + 1) + cal(i - 2, j + 2);
                if (horizontal == 4 || vertical == 4 || diagonal == 4 || diagonal2 == 4)
                {
                    x = 1;
                    break;
                }
            }
            else if (ch[i][j] == 'X')
            {
                ll horizontal = cal(i, j + 1) + cal(i, j + 2) + cal(i, j - 1) + cal(i, j - 2);
                ll vertical = cal(i + 1, j) + cal(i + 2, j) + cal(i - 1, j) + cal(i - 2, j);

                ll diagonal = cal(i + 1, j + 1) + cal(i + 2, j + 2) + cal(i - 1, j - 1) + cal(i - 2, j - 2);
                ll diagonal2 = cal(i + 1, j - 1) + cal(i + 2, j - 2) + cal(i - 1, j + 1) + cal(i - 2, j + 2);

                if (horizontal == 3 || vertical == 3 || diagonal == 3 || diagonal2 == 3)
                {
                    x = 1;
                    break;
                }
            }
        }
        if (x)
        {
            break;
        }
    }
    if (x)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}