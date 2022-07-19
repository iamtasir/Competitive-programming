#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define ss ' '
#define MAX 1005
ll vis[MAX][MAX];
string s[MAX];
string s1;

ll n, m;
ll ok;
ll dx[] = {-1, 1, 0, 0};
ll dy[] = {0, 0, -1, 1};
char step[] = {'U', 'D', 'L', 'R'};
ll sz = INT_MAX;
ll cnt[MAX][MAX];
ll fxx, fyy, sxx, syy;
void bfs(ll i, ll j)
{
    memset(cnt, -1, sizeof(cnt));
    // cout << i << ss << j << nn;
    cnt[i][j] = 0;
    queue<pair<ll, pair<ll, ll>>> p;
    p.push({0, {i, j}});
    s[i][j] = '#';
    while (!p.empty())
    {

        ll dis = p.front().first;
        ll i = p.front().second.first;
        ll j = p.front().second.second;
        p.pop();
        if (i == sxx && j == syy)
        {
            cout << "YES" << nn;
            cout << dis << nn;
            string s2 = "";
            while (i != fxx || j != fyy)
            {
                // cout << cnt[i][j - 1] << nn;
                if (j - 1 >= 0 && cnt[i][j - 1] == dis - 1)
                {
                    j--;
                    s2 += "R";
                }
                else if (j + 1 < m && cnt[i][j + 1] == dis - 1)
                {
                    j++,
                        s2 += "L";
                    // cout << ss2 << ss << "U" << nn;
                }
                else if (i - 1 >= 0 && cnt[i - 1][j] == dis - 1)
                {
                    i--,
                        s2 += "D";
                    // cout << ss3 << ss << "U" nn;
                }
                else
                {
                    i++;
                    s2 += "U";
                    // cout << ss4 << "D" << nn;
                }
                dis--;
            }
            // cout << i << ss << j << nn;
            reverse(s2.begin(), s2.end());
            cout << s2 << nn;
            ok = 1;
            return;
        }

        for (ll k = 0; k < 4; k++)
        {
            ll x = i + dx[k], y = j + dy[k];
            if (x >= 0 && x < n && y >= 0 && y < m)
            {
                if (s[x][y] == '.' || s[x][y] == 'B')
                {
                    s[x][y] = '#';
                    cnt[x][y] = dis + 1;
                    p.push({dis + 1, {x, y}});
                }
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> s[i];
    ok = 0;
    //
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {

            if (s[i][j] == 'A')
            {
                fxx = i;
                fyy = j;
                // bfs(i, j);
            }
            if (s[i][j] == 'B')
            {
                sxx = i;
                syy = j;
            }
        }
    }
    bfs(fxx, fyy);
    if (!ok)
        cout << "NO" << nn;
}