#include <bits/stdc++.h>
using namespace std;
void common_prime(long long int c, long long int d)
{

	long long int gcd = __gcd(c, d);
	cout << gcd << endl;
}

int main()
{
	long long int a, b, m, n, t, c, d;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> m;
		c = a - m;
		d = b - m;
		common_prime(c, d);
	}
	return 0;
}