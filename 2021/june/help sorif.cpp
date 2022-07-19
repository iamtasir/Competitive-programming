#include <bits/stdc++.h>
using namespace std;
#define n 50000
typedef long long int ll;

ll marked[n];

int main()
{
    vector<ll> primes;
    marked[0] = 1, marked[1] = 1;
    primes.push_back(2);

    for (ll i = 4; i <= n; i += 2)
        marked[i] = 1;

    for (ll i = 3; i <= n; i += 2)
    {
        if (marked[i] == 0)
        {
            primes.push_back(i);

            if (i <= n / i)
            {
                for (ll j = i * i; j <= n; j += i * 2)
                    marked[j] = 1;
            }
        }
    }

    ll num1, num, l = primes.size();
    while (scanf("%lld", &num1) == 1)
    {
        if (num1 == 0)
            break;
        vector<ll> v;

        num = abs(num1);
        for (ll i = 0; i < l; i++)
        {
            if (primes[i] * primes[i] <= num)
            {
                while (num % primes[i] == 0)
                {
                    v.push_back(primes[i]);
                    num /= primes[i];
                }
            }
            else
                break;
        }
        if (num != 1)
            v.push_back(num);

        if (v.size() == 1 && num1 >= 0)
            printf("%lld = %lld\n", num1, num1);
        else
        {
            if (num1 < 0)
                printf("%lld = -1 x ", num1);
            else
                printf("%lld = 1 x ", num1);

            ll m = v.size();
            for (ll i = 0; i < m; i++)
            {
                if (i == m - 1)
                    printf("%lld\n", v[i]);
                else
                    printf("%lld x ", v[i]);
            }
        }
    }

    return 0;
}
