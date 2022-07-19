#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

int main()
{
    ll row, col, tc, t = 1;

    sc1(tc);

    while (tc--){
        sc2(row, col);

        cout << "Case " << t++ << ": " ;

        ll ans = row * col;
        if(row == 1 || col == 1){
            cout << max(row, col) << endl;
        }
        else if(row == 2 || col == 2){
            ll big = max(row, col);
            ans = big;
            if(big % 4 == 1 || big % 4 == 3) ans++;
            if(big % 4 == 2 ) ans+=2;
            cout << ans << endl;
        }
        else if(ans %2 == 1){
            cout << ans/2 + 1 << endl;
        }
        else
            cout << ans/2 << endl;
    }
}
