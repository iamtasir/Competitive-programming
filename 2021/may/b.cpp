
#include <bits/stdc++.h>

using namespace std;
int countOdd(int L, int R)
{

    int N = (R - L) / 2;
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;

    return N;
}
int main()
{

    int L, R;
    cin >> L >> R;
    int odds = countOdd(L, R);

    cout << odds << endl;
    return 0;
}