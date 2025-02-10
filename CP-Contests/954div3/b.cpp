#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
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
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
}

signed main() {
    fastIO;
    int t = 1;
    cin >> t;

    while (t--) {
        int numRows, numCols;
        cin >> numRows >> numCols;
        int matrix[numRows][numCols];
        for (int rowIdx = 0; rowIdx < numRows; rowIdx++){
            for (int colIdx = 0; colIdx < numCols; colIdx++){
                cin >> matrix[rowIdx][colIdx];
            }
        }

        for (int rowIdx = 0; rowIdx < numRows; rowIdx++) {
            for (int colIdx = 0; colIdx < numCols; colIdx++) {
                int maxVal = 0;
                int updateFlag = 1; 

                if (rowIdx - 1 >= 0) {
                    maxVal = max(maxVal, matrix[rowIdx - 1][colIdx]);
                }
                if (colIdx - 1 >= 0) {
                    maxVal = max(maxVal, matrix[rowIdx][colIdx - 1]);
                }
                if (rowIdx + 1 < numRows) {
                    maxVal = max(maxVal, matrix[rowIdx + 1][colIdx]);
                }
                if (colIdx + 1 < numCols) {
                    maxVal = max(maxVal, matrix[rowIdx][colIdx + 1]);
                }

                if (rowIdx - 1 >= 0 && matrix[rowIdx][colIdx] <= matrix[rowIdx - 1][colIdx]) {
                    updateFlag = 0;
                }
                if (colIdx - 1 >= 0 && matrix[rowIdx][colIdx] <= matrix[rowIdx][colIdx - 1]) {
                    updateFlag = 0;
                }
                if (rowIdx + 1 < numRows && matrix[rowIdx][colIdx] <= matrix[rowIdx + 1][colIdx]) {
                    updateFlag = 0;
                }
                if (colIdx + 1 < numCols && matrix[rowIdx][colIdx] <= matrix[rowIdx][colIdx + 1]) {
                    updateFlag = 0;
                }

                if (updateFlag == 1) {
                    matrix[rowIdx][colIdx] = maxVal;
                }
            }
        }

        for (int rowIdx = 0; rowIdx < numRows; rowIdx++) {
            for (int colIdx = 0; colIdx < numCols; colIdx++) {
                cout << matrix[rowIdx][colIdx] << " ";
            }
            cout << endl;
        }
    }
}