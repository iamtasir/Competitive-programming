#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ans = 0;
    int array[n + 1][4];
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= 3; j++)
        {
            cin >> array[i][j];
            if (array[i][j] > 0)
                cnt++;
        }
        if (cnt >= 2)
            ans++;

        // if(array[i][1]+array[i][2]+array[i][3]>=2)
        // ans++;

        // int petya, vasya, tonoya;
        // cin >> petya >> vasya >> tonoya;
        // if (petya + vasya + tonoya >= 2)
        //     ans++;
    }
    cout << ans << "\n";
}