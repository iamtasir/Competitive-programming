#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    s = "#" + s;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == t[0])
        {
            int c = 1;
            for (int j = i + 1; j < i + m && c <= m && j <= n; j++, c++)
            {
                if (s[j] == t[c])
                    continue;
                else
                    break;
            }
            if (c == m)
            {
                arr[i + m - 1]++;
            }
        }
    }
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
        cout << arr[i] << " ";
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l = l + m - 1;
        l = min(n + 1, l);
        cout << max(0, arr[r] - arr[l - 1]) << endl;
    }
}
// 5 5 2 2 3
