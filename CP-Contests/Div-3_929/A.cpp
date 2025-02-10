#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int maxPositiveSum = 0;
        int totalSum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalSum += abs(a[i]);

            if (a[i] > 0) {
                maxPositiveSum += a[i];
            }
        }

        
        if (maxPositiveSum == 0) {
            cout << totalSum << endl;
        } else {
            cout << max(maxPositiveSum, totalSum) << endl;
        }
    }
}
