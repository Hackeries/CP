// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define f first
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

// void solve(){
// 	lli n,d;cin >> n >> d;
// 	vector<lli>v(n);
	
// 	fr(i,n){
// 		cin >> v[i];
// 	}
// 	sort(all(v));
// 	// lli ans = -1;
// 	for(int i = 0;i<n-1;++i){
// 		if((v[i+1] - v[i]) <= d){
// 			cout << v[i+1] << "\n";
// 			return;
// 		}
// 	}
// 	cout << -1 << "\n";
// }

// signed main(){
	
//     fastIO;
//     // int t=1;
//     // cin >> t;

//     // while(t--){
//         solve();
//     // }
// }


#include <iostream>
#include <vector>

using namespace std;

// Function to check if given indices are within matrix bounds
bool is_valid(int i, int j, int n, int m) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

// Function to find the first unstable cell
pair<int, int> find_unstable_cell(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int current_value = matrix[i][j];
            bool is_stable = true;

            // Check all four neighbors
            if (is_valid(i-1, j, n, m) && matrix[i-1][j] >= current_value)
                is_stable = false;
            if (is_valid(i+1, j, n, m) && matrix[i+1][j] >= current_value)
                is_stable = false;
            if (is_valid(i, j-1, n, m) && matrix[i][j-1] >= current_value)
                is_stable = false;
            if (is_valid(i, j+1, n, m) && matrix[i][j+1] >= current_value)
                is_stable = false;

            if (is_stable) {
                // Return coordinates of the first unstable cell found
                return {i, j};
            }
        }
    }

    // If no unstable cell is found, return {-1, -1}
    return {-1, -1};
}

// Function to stabilize the matrix
void stabilize_matrix(vector<vector<int>>& matrix) {
    while (true) {
        pair<int, int> unstable_cell = find_unstable_cell(matrix);

        if (unstable_cell.first == -1 && unstable_cell.second == -1) {
            // No unstable cell found, terminate the loop
            break;
        }

        // Decrease the value of the unstable cell by 1
        matrix[unstable_cell.first][unstable_cell.second] -= 1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        // Input matrix elements
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Process and stabilize the matrix
        stabilize_matrix(matrix);

        // Output the stabilized matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << matrix[i][j];
                if (j < m - 1) {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
