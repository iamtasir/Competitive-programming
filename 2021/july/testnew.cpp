#include <bits/stdc++.h>
#define pb push_back
#define MAX 1000006
#define lim 1000006
using namespace std;
typedef long long ll;
bitset<MAX> mark;
vector<int> prime;
void sieve()
{
    for (int i = 3; i < sqrt(MAX); i += 2)
    {
        if (mark[i] == 0)
            for (int j = i * i; j < MAX; j += i)
                mark[j] = 1;
    }
    prime.pb(2);
    for (int i = 3; i < MAX; i += 2)
        if (mark[i] == 0)
            prime.pb(i);
}
ll divisors_of_factorial(int n)
{
    ll res = 1;
    for (int i = 0; prime[i] <= n; i++)
    {
        int num = n;
        ll s = 0;
        while (num)
        {
            s += num / prime[i];
            num /= prime[i];
        }
        res = (res * (s + 1)) % 1000000007;
    }
    return res;
}
int main()
{
    //  freopen("input.txt","r",stdin);
    sieve();
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", divisors_of_factorial(n));
    }

    return 0;
}