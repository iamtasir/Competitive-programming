#include <bits/stdc++.h>
using namespace std;
int smallestDivisor(int n)
{

    if (n % 2 == 0)
        return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }

    return n;
}
int main()
{
    int n ;
    cin>>n;
    int x=smallestDivisor(n);

  cout<<x<<endl;
    return 0;
}
