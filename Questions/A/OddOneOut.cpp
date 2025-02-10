#include <bits/stdc++.h>
using namespace std;
int findUniqueNumber(int a, int b, int c) {
    return a ^ b ^ c;
}

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int result = findUniqueNumber(num1, num2, num3);

    cout << result << endl;

}
