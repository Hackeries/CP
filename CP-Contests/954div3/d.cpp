// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define fi first
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
//     if(expo == 0)return 1;

//     if(expo%2 == 1){
//         return (base * binpow(base , expo-1)) % MOD;
//     }else{
//         lli temp = binpow(base , expo / 2);
//         return (temp * temp) % MOD;
//     }
// }

// void solve(){
// 	lli n;cin >> n;
// 	string s;cin >> s;
	
// 	if(n<=2){
// 		cout << s << "\n";
// 	}else{
		
// 	}
// }

// signed main(){
	
//     fastIO;
//     int t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }


#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int minimize_expression(const string& s) {
    int n = s.length();
    
    // Dynamic programming tables
    vector<vector<int>> dp_min(n, vector<int>(n, numeric_limits<int>::max()));
    vector<vector<int>> dp_max(n, vector<int>(n, numeric_limits<int>::min()));
    
    // Initialize dp tables
    for (int i = 0; i < n; ++i) {
        dp_min[i][0] = stoi(s.substr(0, i+1));
        dp_max[i][0] = stoi(s.substr(0, i+1));
    }
    
    // Fill dp tables
    for (int j = 1; j < n - 1; ++j) {  // j = number of operators to be inserted
        for (int i = j + 1; i < n; ++i) {  // i = current position in string
        
            // Initialize dp_min and dp_max for current position and number of operators
            dp_min[i][j] = numeric_limits<int>::max();
            dp_max[i][j] = numeric_limits<int>::min();
            
            // Calculate dp_min[i][j] and dp_max[i][j]
            for (int k = j; k <= i - 1; ++k) {
                int num = stoi(s.substr(k + 1, i - k));
                
                int prod_min = dp_min[k][j - 1] * num;
                int prod_max = dp_max[k][j - 1] * num;
                
                dp_min[i][j] = min(dp_min[i][j], min(prod_min, prod_max));
                dp_max[i][j] = max(dp_max[i][j], max(prod_min, prod_max));
                
                int sum_min = dp_min[k][j - 1] + num;
                int sum_max = dp_max[k][j - 1] + num;
                
                dp_min[i][j] = min(dp_min[i][j], min(sum_min, sum_max));
                dp_max[i][j] = max(dp_max[i][j], max(sum_min, sum_max));
            }
        }
    }
    
    // The minimum result with n-2 operators inserted
    return dp_min[n - 1][n - 2];
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Length of the string s
        
        string s;
        cin >> s; // The string s
        
        // Calculate and output the minimum result for the current test case
        cout << minimize_expression(s) << endl;
    }
    
    return 0;
}
