#include <bits/stdc++.h>
using namespace std;

// int findKthCard(int n, int k) {
//     int position = (2 * k - 1) % n;
    
//     if (position == 0) {
//         return n;
//     } else {
//         return position;
//     }
// }
int findKthCard(int n, int k){
	int now=(n+1)/2;
	if(k<=now) return 2*k-1;
	return 2*findKthCard(n/2, k-now);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long result = findKthCard(n, k);
        cout << result << endl;
    }
}