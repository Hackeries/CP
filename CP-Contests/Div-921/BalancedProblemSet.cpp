#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int ans = 1;
    while (t--) {
        int x, n;
        cin >> x >> n;

        // if (x == 10 && n == 3) {
        //     cout << "2" << endl;
        // } else {
        for(int i = 0;i<=x/n;i++){

            if (x/i>=n){
                ans = i;
            }
            else{
                break;
            }
            // int base_difficulty = x / n;
            // cout << base_difficulty << endl;
        }
        // }
    }
    cout << ans << endl;
}
