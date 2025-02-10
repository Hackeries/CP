#include <bits/stdc++.h>
#define lli long long
#define vi vector<lli>
#define fr(i, n) for(int i = 0; i < n; ++i)

using namespace std;

// Read only region start

lli allensValue(int input1, int input2[], int input3[]){

// Read only region end

lli allensValue(int input1, int input2[], int input3[]);
    vector<lli> A(input2, input2 + input1);
    vector<lli> G(input3, input3 + input1 - 2);
    
    sort(A.begin(), A.end());
    sort(G.begin(), G.end());
    
    lli min_x = LLONG_MAX;
    
    for (int i = 0; i < input1; ++i) {
        for (int j = i + 1; j < input1; ++j) {
            vector<lli> tempA;
            for (int k = 0; k < input1; ++k) {
                if (k != i && k != j) {
                    tempA.push_back(A[k]);
                }
            }
            lli x = G[0] - tempA[0];
            bool valid = true;
            for (int k = 0; k < tempA.size(); ++k) {
                if (G[k] - tempA[k] != x || x <= 0) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                min_x = min(min_x, x);
            }
        }
    }
    
    return min_x;
}

int main() {
    int n;
    cin >> n;
    int A[n], G[n-2];
    
    fr(i, n) {
        cin >> A[i];
    }
    
    fr(i, n-2) {
        cin >> G[i];
    }
    
    lli result = allensValue(n, A, G);
    cout << result << "\n";
    
    return 0;
}
