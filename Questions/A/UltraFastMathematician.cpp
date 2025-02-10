#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string num1,num2;
    cin >> num1 >> num2;
    
    string result = "";
    for (int i = 0; i < num1.size(); ++i) {
        result += (num1[i] == num2[i]) ? '0' : '1';
    }

    cout << result << endl;

    return 0;
}
