#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        string s = v[i];
        for (int j = 0; j < n; j++) {
            char c = s[j];
            arr[i][j] = (c == '1') ? 1 : 0;
        }
    }

    int triangle = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (arr[i][j] == 1 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
                triangle = 1;
                break;
            }
        }
    }

    cout << ((triangle == 1) ? "TRIANGLE" : "SQUARE") << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }
}
