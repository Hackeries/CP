#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        int ans = 0;

        if(((4*n)-2) == k){
            ans = ceil(k/2.0)+1;
        }
        else{
            ans = ceil(k/2.0);
        }
        cout << ans << endl;
    }
}
