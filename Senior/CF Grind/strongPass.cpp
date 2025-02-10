// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define fi first
// #define sc second
// #define EB emplace_back
// #define MP make_pair
// #define vi vector<int>
// #define vov vector<vector<int>>v(n,vector<int> (m))
// #define vpii vector<pair<int,int>>
// #define all(o) (o).begin(), (o).end()
// #define fr(i,n) for(lli i=0;i<n;++i)
// #define br(n,i) for(lli i=n;i>=0;--i)
// #define vovfr(i,n,m) fr(i,n){fr(j,m){}}
// #define rep(i,a,b) for(lli i=a;i<=b;++i)
// #define per(i,b,a) for(lli i=b;i>=a;--i)
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// using namespace std;
// const int MOD = 1e9 + 7;
// lli inverse(lli x){return (x,(MOD-2));}
// lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
// lli binpow(lli base, lli expo){
//     if(expo == 0)return 1;

//     if(expo%2 == 1){
//         return (base * binpow(base , expo-1)) % MOD;
//     }else{
//         lli temp = binpow(base , expo / 2);
//         return (temp * temp) % MOD;
//     }
// }

// void solve(){
//     lli n;cin >> n;
//     while(n--){
//         string s;cin >> s;
//         string news = s;
        
//         if (s.size() == 1) {
//             char next_char = (s[0] == 'z') ? 'a' : s[0] + 1;
//             s.push_back(next_char);
//             cout << s << "\n";
//             continue;
//         }
        
//         bool all_different = true;
//         for (size_t i = 1; i < s.size(); ++i) {
//             if (s[i] == s[i - 1]) {
//                 all_different = false;
//                 break;
//             }
//         }
//         if(all_different) {
//             news.push_back('a');
//         }else{
//             fr(i,s.size()){
//                 if(i+1 < s.size() && s[i]==s[i+1]){
//                     news.insert(news.begin()+i+1 , s[i]+1);
//                     ++i;
//                 }
//             }
//         }
        
//         cout << news << "\n";
//     }
// }

// signed main(){
    
//     fastIO;
//     int t=1;
//     // cin >> t;

//     while(t--){
//         solve();
//     }
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int calculate_typing_time(const string &s) {
    if (s.empty()) return 0;
    int time = 2;
    for (size_t i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i-1]) ? 1 : 2;
    }
    return time;
}

void solve() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string best_s = s;
        int max_time = calculate_typing_time(s);
        
        for (char c = 'a'; c <= 'z'; ++c) {
            for (size_t i = 0; i <= s.size(); ++i) {
                string new_s = s;
                new_s.insert(new_s.begin() + i, c);
                int new_time = calculate_typing_time(new_s);
                if (new_time > max_time) {
                    max_time = new_time;
                    best_s = new_s;
                }
            }
        }
        
        cout << best_s << "\n";
    }
}

int main() {
    solve();
    return 0;
}
