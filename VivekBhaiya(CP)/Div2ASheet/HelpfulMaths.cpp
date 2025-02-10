#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;

int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}

// void solve(){
    
//     string s,ans;cin >> s;

//     for(int i=0;i<size(s);++i){
//         if(s[i] !='+'){
//             ans.pb(s[i]);
//         }
//     }

//     sort(ans.begin() , ans.end());
//     cout << ans[0];

//     for(int i=1;i<ans.size();++i){
//         cout << "+";
//         cout << ans[i];
//     }
// }


void solve() {
    string s;
    cin >> s;
    
    vector<string> ans;

    for (char c : s) {
        if (c != '+') {
            ans.push_back(string(1, c));
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans[0];
    for (int i = 1; i < ans.size(); ++i) {
        cout << "+" << ans[i];
    }
}

int main(){
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}