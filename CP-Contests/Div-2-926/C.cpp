#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll k,x,a;
    cin >> k >> x >> a;

    if(abs(k-x)%a == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// void solve() {
//     int k, x, a;
//     cin >> k >> x >> a;

//     // If Sasha can win x+1 times or more, he can achieve any number of coins.
//     if (a >= (ll)k * (x + 1)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }
