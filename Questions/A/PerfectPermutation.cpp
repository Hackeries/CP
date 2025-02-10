#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v(t+1);
    if (t % 2 != 0) {
        cout << -1;
    } else {

        for (int i = 1; i <= t; ++i) {
            v[i] = i;
        }

        for (int i = 1; i <= t; i += 2) {
            swap(v[i], v[i + 1]);
        }

        for (int i=1;i<=t;++i) {
            cout << v[i] << " ";
        }
    }
}
