#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int x = w;
    
    vector<int> arr(x);

    for (int i = 0; i < x; i++) {
        arr[i] = k * (i + 1);
    }

    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += arr[i];
    }

    int result = max(0, sum - n); 

    cout << result;

    return 0;
}
