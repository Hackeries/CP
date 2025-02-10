#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string result = "";
        // string start = "abcdefghijklmnopqrstuvwxyz";
        // char alphabet[k];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                result += char('a'+j);
            }
        }
        cout << result << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string start = "abcdefghijklmnopqrstuvwxyz";
//         string t = start.substr(0,k);
//         while(n--){ 
//             cout << t ;
//         }
//     }
//     return 0;
// }