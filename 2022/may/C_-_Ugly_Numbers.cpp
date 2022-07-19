#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
    {

        //  long long mul = ans * base;
        if (ans > LLONG_MAX / base)
        {
            return LLONG_MAX;
        }
        else
            ans *= base;
    }
    return ans;
}

int main()
{

    vector<ll> v;
    for (ll i = 0; i <= 63; i++)
    {
        for (ll j = 0; j <= 40; j++)
        {
            for (ll k = 0; k <= 40; k++)
            {
                ll a = pow1(2ll, i), b = pow1(3ll, j);
                long long mul = a * b;
                if (a > LLONG_MAX / b)
                {
                    // overflowed
                }
                else
                {
                    ll c = pow1(5ll, k);
                    long long mul1 = mul * c;
                    if (mul > LLONG_MAX / c)
                    {
                        // overflowed
                    }
                    else
                    {
                        v.push_back(mul1);
                    }
                }
            }
        }
    }
    sort(v.begin(), v.end());
    cout << "The 1500'th ugly number is " << v[1500 - 1] << "."
         << "\n";

    return 0;
}
