// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n;
//     cin >> n;
//     vector<int>v;
//     for(int i=0; i<n; ++i){
//         int x;

//         cin >> x;
//         // v.push_back(x);

//         if(i && v.back() > x){
//             v.push_back(1);
//         }
//         else{
//             v.push_back(x);
//         }
//     }

//     cout << size(v) << endl;

//     for(auto val : v){
//         cout << val << " ";
//     }
//     cout << endl;

// }
// int main(){
//     ios_base::sync_with_stdio(false);
// 	cin.tie(0);

//     int t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }


#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int32_t main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (i && a.back() > x) {
                a.push_back(1);
            }
            a.push_back(x);
        }
        cout << a.size() << "\n";
        for (int el : a)
            cout << el << " ";
        cout << "\n";
    }
}