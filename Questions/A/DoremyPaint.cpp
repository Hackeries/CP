#include <iostream>
#include <map>
#include <cmath>

using namespace std;

const int MX = 100 + 5;

string solve() {
    int n;
    cin >> n;
    map<int, int> occ;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        occ[x]++;
    }
    if (occ.size() >= 3)
        return "No";
    else {
        if (abs(occ.begin()->second - occ.rbegin()->second) <= 1)
            return "Yes";
        else
            return "No";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
