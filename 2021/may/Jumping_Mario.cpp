#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    int Case = 0;
    int walls[1000];
    cin >> test_case;
    while (test_case--)
    {
        int jumps, high = 0, low = 0, temp = 0;

        cin >> jumps;
        for (int i = 1; i <= jumps; i++)
        {
            cin >> walls[i];
        }
        for (int i = 1; i < jumps; i++)
        {
            if (walls[i + 1] > walls[i] && i + 1 <= jumps)
            {
                high++;
                // cout << walls[i + 1] << endl;
            }
            else if (walls[i + 1] < walls[i] && i + 1 <= jumps)
            {
                low++;
            }
            temp++;
        }
        Case++;
        cout << "Case " << Case << ": " << high << " " << low << endl;
    }

    return 0;
}
