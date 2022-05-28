///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used:
*/
#include <bits/stdc++.h>
using namespace std;
typedef int ll;
#define MAX 1000005
#define mod 1000000007
ll ar[MAX], tr[4 * MAX + 3], br[MAX];
void build(ll start, ll end, ll node)
{

   if (start == end)
   {
      tr[node] = br[start];
      // cout << start;
      return;
   }
   ll mid = (start + end) / 2;
   build(start, mid, 2 * node);
   build(mid + 1, end, 2 * node + 1);

   tr[node] = tr[2 * node] + tr[2 * node + 1];
}
void update(ll start, ll end, ll node, ll value, ll idx)
{
   if (start == end)
   {
      tr[node] = value;
      return;
   }
   ll mid = (start + end) / 2;
   if (idx <= mid)
      update(start, mid, 2 * node, value, idx);
   else
      update(mid + 1, end, 2 * node + 1, value, idx);
   tr[node] = tr[2 * node] + tr[2 * node + 1];
}
ll query(ll start, ll end, ll rbegin, ll rend, ll node)
{
   if (start > rend || rbegin > end)
   {

      return 0;
   }
   if (rbegin <= start && rend >= end)
   {
      return tr[node];
   }
   ll mid = (start + end) / 2;
   ll leftsum = query(start, mid, rbegin, rend, 2 * node);
   ll rightsum = query(mid + 1, end, rbegin, rend, 2 * node + 1);
   return leftsum + rightsum;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
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
      build(1, last, 1);
      // for (ll i = 1; i <= 4 * last; i++)
      //    cout << tr[i] << ss;
      while (q--)
      {
         char c;
         cin >> c;
         if (c == 'c')
         {
            ll index;
            cin >> index;

            ll ans = 0;
            ll start = 1, end = n + 1;
            while (start < end)
            {
               ll mid = (start + end) / 2;
               if (query(1, last, 1, mid, 1) >= index)
               {
                  ans = mid;
                  end = mid;
               }
               else
                  start = mid + 1;
            }
            // cerr << ans << nn;
            if (ans)
            {
               cout << ar[ans] << "\n";
               update(1, last, 1, 0, ans);
            }
            else
               cout << "none"
                    << "\n";

            // n--;
         }
         else
         {
            ll value;
            cin >> value;
            n++;
            ar[n] = value;
            br[n] = 1;
            update(1, last, 1, 1, n);
         }
      }
   }

   return 0;
}
/// 10^3 te n^2 complexity greedy solve kora somvob mind it