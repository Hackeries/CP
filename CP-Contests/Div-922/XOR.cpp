#include <iostream>
#include <cmath>
using namespace std;

long long findMinXOR(long long a, long long b, long long r) {
    long long min_diff = abs((a ^ 0) - (b ^ 0));
    long long xor_ab = a ^ b;

    for (long long x = 1; x <= r; ++x) {
        long long diff = abs((a ^ x) - (b ^ x));
        min_diff = min(min_diff, diff);
    }
    return min_diff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;

        long long result = findMinXOR(a, b, r);
        cout << result << endl;
    }

    return 0;
}

