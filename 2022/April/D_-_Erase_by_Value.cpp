
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

   ll n;
   cin >> n;
   ll ar[n + 10];
   ll mn = LLONG_MAX;
   ll mx1 = 0;
   for (ll i = 0; i < n; i++)
   {
      cin >> ar[i];
      mn = min(ar[i], mn);
      mx1 = max(mx1, ar[i]);
   }
   ll mx = ar[n - 1];
   ll value = -1;
   for (ll i = 1; i < n; i++)
   {
      if (ar[i] >= ar[i - 1])
      {
         continue;
      }
      else
      {
         value = ar[i - 1];
         break;
      }
   }
   if (value != -1)
   {

      for (ll i = 0; i < n; i++)
         if (value != ar[i])
            cout << ar[i] << " ";
   }
   else
   {

      for (ll i = 0; i < n; i++)
         if (ar[i] != mx1)
            cout << ar[i] << " ";
   }
   return 0;
}
