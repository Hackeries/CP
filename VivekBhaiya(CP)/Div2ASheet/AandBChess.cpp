// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define fr first
// #define sc second
// #define EB emplace_back
// #define MP make_pair
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vpii vector<pair<int,int>>
// #define all(o) (o).begin(), (o).end()
// #define fr(i,n) for(lli i=0;i<n;++i)
// #define rep(i,a,b) for(lli i=a;i<=b;++i)
// #define per(i,b,a) for(lli i=b;i>=a;--i)
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// using namespace std;
// const int MOD = 1e9 + 7;
// lli inverse(lli x){return (x,(MOD-2));}
// lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
// lli binpow(lli base, lli expo){
//     if(expo == 1)return 1;

//     if(expo%2 == 1){
//         return (base * binpow(base , expo-1)) % MOD;
//     }else{
//         lli temp = binpow(base , expo / 2);
//         return (temp * temp) % MOD;
//     }
// }

// int getPieceWeight(char piece) {
//     switch(piece) {
//         case 'Q': case 'q': return 9;
//         case 'R': case 'r': return 5;
//         case 'B': case 'b': return 3;
//         case 'N': case 'n': return 3;
//         case 'P': case 'p': return 1;
//         default: return 0;
//     }
// }

// void solve() {
//     vector<vector<char>> board(8, vector<char>(8));
//     int whiteWeight = 0, blackWeight = 0;
//     for(int i = 0; i < 8; ++i) {
//         for(int j = 0; j < 8; ++j) {
//             cin >> board[i][j];
//             int weight = getPieceWeight(board[i][j]);
//             if (isupper(board[i][j])) {
//                 whiteWeight += weight;
//             } else if (islower(board[i][j])) {
//                 blackWeight += weight;
//             }
//         }
//     }
//     if (whiteWeight > blackWeight) {
//         cout << "White" << endl;
//     } else if (blackWeight > whiteWeight) {
//         cout << "Black" << endl;
//     } else {
//         cout << "Draw" << endl;
//     }
// }

// signed main(){
    
//     fastIO;
//     // int t=1;
//     // cin >> t;

//     // while(t--){
//         solve();
//     // }
// }

#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fr first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
lli inverse(lli x){return (x,(MOD-2));}
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

int solve(int n){
    if(n==0){
        return 0;
    }
    return n%10 + solve(n/10);
}

signed main(){
    
    fastIO;
    int t=1;
    // cin >> t;

    // while(t--){
        int n;cin >>n;
        cout << solve(n);
    // }
}