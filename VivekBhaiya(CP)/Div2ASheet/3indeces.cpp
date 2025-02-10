#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    
    for(int i =0;i<n;++i){
        cin >> v[i];
    }
    for(int i =0;i<n;++i){
        int j = i+1;
        int k = j+1;
        if (i < j && j < k && v[i] < v[j] && v[j] > v[k] && k < n){
            cout << "Yes\n";
            // break;
            cout << i + 1 << " " << i + 2 << " " << i + 3 << "\n";
            return;
        }
    }
    cout << "No\n";
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> p(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> p[i];
//     }
//     for (int i = 0; i < n - 2; ++i) {
//         if (p[i] < p[i + 1] && p[i + 1] > p[i + 2]) {
//             cout << "YES\n";
//             cout << i + 1 << " " << i + 2 << " " << i + 3 << "\n";
//             return;
//         }
//     }
//     cout << "NO\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

// }
