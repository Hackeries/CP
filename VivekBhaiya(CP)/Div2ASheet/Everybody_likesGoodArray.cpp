// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define mp make_pair
// #define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;
// void solve(){
//     int n;
//     cin >> n;
//     vector<int>v(n);
//     int count = 0;
//     for(int i=0;i<n;++i){
//         cin >> v[i];
//     }
//     for(int i=0;i<n;++i){
//         // if( ((v[i] % 2) == (v[i+1] % 2))){
//         if( ((v[i] % 2) == (v[i+1] % 2)) || ((v[i] & 1) && (v[i+1] & 1)) ){
//             v[i+1] *= v[i];
//             count++;
//         }else{
//             v[i] = v[i+1];
//         }
//     }
//     cout << count << endl;
// }

// int main(){
//     int t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        int prev, current;
        cin >> prev; // Read the first element separately
        for (int i = 1; i < n; i++) {
            cin >> current;
            if (prev % 2 == current % 2) {
                current *= prev;
                count++;
            } else {
                prev = current; // Move to the next pair
            }
        }
        cout << count << "\n";
    }
}
