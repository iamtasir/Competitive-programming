#include <bits/stdc++.h>

using namespace std;

const int B = 29;
const int N = 100010;
const int MOD = 1e9 + 7;

// power[i] = B^i
// inverse[i] = B^(-i)
// 29^(-1) mod 1e9 + 7
long long power[N], inverse[N], INV_B;

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

    string text, pattern;
    cin >> text >> pattern;

    long long pattern_hash = 0;
    // p[0] * power[0] + p[1] * power[1] + p[2] * power[2] + p[3] * power[3] + ...
    for (int i = 0; i < pattern.size(); ++i) {
        pattern_hash = (pattern_hash + (pattern[i] - 'a' + 1) * power[i]) % MOD;
    }
    long long text_hash = 0;
    for (int i = 0; i < pattern.size(); ++i) {
        text_hash = (text_hash + (text[i] - 'a' + 1) * power[i]) % MOD;
    }
    // starting position of pattern in text
    for (int i = 0; i <= (int) text.size() - (int) pattern.size(); ++i) {
        // text[i.....i+pattern_size-1]
        if (text_hash == pattern_hash) {
            cout << "match found starting at " << i << '\n';
        }
        text_hash -= text[i] - 'a' + 1;
        text_hash = text_hash * INV_B % MOD;
        if (i + pattern.size() < text.size()) {
            text_hash = (text_hash + (text[i + pattern.size()] - 'a' + 1) * power[pattern.size() - 1]) % MOD;
        }
        if (text_hash < 0) text_hash += MOD;
    }
    return 0;
}
