// #include <iostream>
// using namespace std;
// const int MAX_DIGIT = 9;

// long long digitSums[MAX_DIGIT + 1];

// void solve() {
//     for (int i = 1; i <= MAX_DIGIT; ++i) {
//         digitSums[i] = digitSums[i / 10] + i % 10;
//     }
// }

// long long digitSum(long long num) {
//     long long sum = 0;
    
//     while (num > 0) {
//         if (num <= MAX_DIGIT) {
//             sum += digitSums[num]; 
//             break;
//         } else {
//             sum += num % 10;
//             num /= 10;
//         }
//     }
    
//     return sum;
// }

// int main() {
//     solve();

//     int t;
//     cin >> t;

//     while (t--) {
//         long long n, totalSum = 0;
//         cin >> n;

//         for (long long i = 1; i <= n; ++i) {
//             totalSum += digitSum(i);
//         }

//         cout << totalSum << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digit sums from 1 to n
long long sumOfDigitSums(long long n) {
    // Base case
    if (n < 10) return n * (n + 1) / 2;

    long long d = 0, nn = n;
    while (nn) {
        d++;
        nn /= 10;
    }

    // Calculate counts of complete sets and the remaining part
    long long p = pow(10, d - 1);
    long long msd = n / p; // Most significant digit

    // Formula components:
    // 1. Sum for complete sets of lower order
    // 2. Sum for the most significant digit's contribution
    // 3. Sum for the remaining part
    return msd * (p * (d - 1) * 45) / 10 +
           (msd * (msd - 1) / 2) * p +
           msd * (n % p + 1) +
           sumOfDigitSums(n % p);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sumOfDigitSums(n) << endl;
    }
    return 0;
}