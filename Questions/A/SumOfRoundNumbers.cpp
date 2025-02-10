// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
    

//     while(t--){
//         int n; cin >> n;
//         vector<int> ans;
//         int power = 1;
//         while(n>0){
//             if((n%10) > 0){
//                 ans.push_back((n%10) * power);
//             }

//             n/=10;
//             power*=10;

//         }

//         cout << ans.size() << endl;

//         for(auto result : ans)
//         cout << result << " ";
//         cout << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int power = 1;
        int count = 0;
        vector<int> results;
        while (n > 0) {
            if ((n % 10) > 0) {
                results.push_back((n % 10) * power);
                count++;
            }
            n /= 10;
            power *= 10;
        }
        cout << count << endl;        
        for (auto res : results) {
            cout << res << " ";
        }
        cout << endl;
    }
}

