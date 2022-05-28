///*    ***Bismillahir Rahmanir Rahim***   */

/*

 Algorithm Used:
           first we made an array like where n=10;
           1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
           1 1 1 1 1 1 1 1 1 1  0  0  0  0  0  0  0

           then build a segment tree
           then if they want to remove a index we mark the index value as 0;
           and calculate the sum;

           then given index we find the index in the segment tree as the segment tree
           has value 1 for every index
           then we find our desire index

           the technique i follow here walikng in the segment tree
           i cheack if the right sum is more than index then go right
           other wise i go left and also minus the value of right sum because
           in the left there is some index is remaining



  here we cheack in left right
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000005
#define mod 1000000007
ll ar[MAX], tr[4 * MAX], br[MAX];
void build(ll start, ll end, ll node)
{
    if (start == end)
    {
        tr[node] = br[start];
        return;
    }
    ll mid = (start + end) >> 1;
    build(start, mid, 2 * node);
    build(mid + 1, end, 2 * node + 1);
    tr[node] = tr[2 * node] + tr[2 * node + 1];
}
void update(ll start, ll end, ll node, ll index, ll value)
{
    if (index > end || index < start)
        return;
    if (start == end && start == index)
    {
        tr[node] = value;
        return;
    }
    ll mid = (start + end) / 2;
    update(start, mid, 2 * node, index, value);
    update(mid + 1, end, 2 * node + 1, index, value);
    tr[node] = tr[2 * node] + tr[2 * node + 1];
}
ll query(ll start, ll end, ll node, ll value)
{
    if (start == end)
    {
        return start;
    }
    ll mid = (start + end) / 2;
    if (tr[2 * node] >= value)
    {
        return query(start, mid, 2 * node, value);
    }
    else
    {
        return query(mid + 1, end, 2 * node + 1, value - tr[2 * node]);
    }
}

int main()
{
    // O_O ;
    ll t;
    cin >> t;
    ll cs = 1;
    while (t--)
    {
        cout << "Case " << cs++ << ":"
             << "\n";

        ll n, q;
        cin >> n >> q;
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
            br[i] = 1;
        }
        ll last = 2 * n;
        ll n1 = n;
        build(1, last, 1);
        while (q--)
        {
            char c;
            cin >> c;
            if (c == 'c')
            {

                ll index;
                cin >> index;
                if (index > n1)
                {
                    cout << "none"
                         << "\n";
                    continue;
                }
                ll ans = query(1, last, 1, index);
                cout << ar[ans] << "\n";
                update(1, last, 1, ans, 0);
                n1--;
            }
            else
            {
                ll value;
                cin >> value;
                n1++;
                n++;
                ar[n] = value;
                update(1, last, 1, n, 1);
            }
        }
    }

    return 0;
}
