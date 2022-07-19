/*---------------Go Code GO---------------*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using Order_Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//(order) Set.order_of_key(); (pointer) Set.find_by_order();

#define PI acos(-1.0)
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define precision(a) fixed << setprecision(a)
#define endl '\n'
#define Flush cout << flush
#define LLMX 0x3fffffffffffffff

void Solution();
int main()
{
   // O_O;
    int tst = 1, csno = 1;
    cin >> tst;
    while (tst--)
    {
        Solution();
    }

    return 0;
}

void Solution()
{
    long long N, Q;
    cin >> N >> Q;
    long long x;
    long long maxP = 0, maxN = 0, temp;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        temp = maxP;
        maxP = max(maxP, maxN + x);
        maxN = max(maxN, temp - x);
         cout << maxP << ' ' << maxN << endl;
    }
    cout << max(maxP, maxN) << endl;
}
