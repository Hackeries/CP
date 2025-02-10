#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate the votes needed for each candidate to win
        int A = max(0, max(b, c) - a + 1);
        int B = max(0, max(a, c) - b + 1);
        int C = max(0, max(a, b) - c + 1);

        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}
