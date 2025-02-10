
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,x,y;
    cin >> n >> x >> y;
    
    vector<long long>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    long long ans = 0;
    map<long long,map<long long , long long>>mp;

    for(int i=0;i<n;++i){
        ans+=mp[(x-v[i]%x)%x][v[i]%y];
        mp[v[i]%x][v[i]%y]++;
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// int solve(int n, int x, int y, vector<int>& a) {
//     long long Pairs = 0;

//     for (long long int i = 0; i < n; ++i) {
//         for (long long int j = i + 1; j < n; ++j) {
//             if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0) {
//                 Pairs++;
//             }
//         }
//     }

//     return Pairs;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, x, y;
//         cin >> n >> x >> y;

//         int a[200005];
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         int result = solve(n, x, y, a);
//         cout << result << endl;
//     }
// }
