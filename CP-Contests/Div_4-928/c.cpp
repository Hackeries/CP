#include <bits/stdc++.h>
using namespace std;


long long sumOfDigitSums(long long n) {
    
    if (n < 10) return n * (n + 1) / 2;

    long long no_of_dig = 0, store = n;
    while (store) {
        no_of_dig++;
        store /= 10;
    }

    
    long long p = pow(10, no_of_dig - 1);
    long long msd = n / p;

   
    return msd * (p * (no_of_dig - 1) * 45) / 10 + (msd * (msd - 1) / 2) * p + msd * (n % p + 1) + sumOfDigitSums(n % p);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sumOfDigitSums(n) << endl;
    }
}