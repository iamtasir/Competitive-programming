#include <bits/stdc++.h>

using namespace std;

const int B = 29;
const int N = 100010;
const int MOD = 1e9 + 7;

// power[i] = B^i
// inverse[i] = B^(-i)
// 29^(-1) mod 1e9 + 7
long long power[N], inverse[N], prefix[N], INV_B;

// text[l] * B^l + text[l+1] * B^(l+1) + ... + text[r] * B^r
long long rangeHash (int l, int r) {
    long long ret = prefix[r + 1] - prefix[l];
    ret = ret * inverse[l] % MOD;
    if (ret < 0) ret += MOD;
    return ret;
}

// a^e (mod MOD)
long long bigMod (long long a, long long e) {
    if (e == 0) return 1;
    if (e == 1) return a;
    if (e % 2 == 0) {
        long long temp = bigMod(a, e / 2);
        return temp * temp % MOD;
    }
    return a * bigMod(a, e - 1) % MOD;
}

int main() {
    power[0] = 1;
    for (int i = 1; i < N; ++i) {
        power[i] = power[i - 1] * B % MOD;
    }
    INV_B = bigMod(B, MOD - 2);
    inverse[0] = 1;
    for (int i = 1; i < N; ++i) {
        inverse[i] = inverse[i - 1] * INV_B % MOD;
    }

    string text;
    cin >> text;

    prefix[0] = 0;
    for (int i = 0; i < text.size(); ++i) {
        prefix[i + 1] = (prefix[i] + (text[i] - 'a' + 1) * power[i]) % MOD;
    }

    int q; cin >> q;
    while (q--) {
        int i, j, l;
        cin >> i >> j >> l;
        if (rangeHash(i, i + l - 1) == rangeHash(j, j + l - 1)) {
            cout << "MATCH\n";
        } else {
            cout << "nope\n";
        }
    }
    return 0;
}

