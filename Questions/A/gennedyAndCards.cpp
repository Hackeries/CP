#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<string> hands(5);
    for(int i = 0;i<5;i++){
        cin >> hands[i];
    }

    for(auto traverse : hands){
        if(traverse[0] == s[0] || traverse[1] == s[1]){
            cout << "Yes";
            return 0;
            // break;
        }
    }
    cout << "NO";

}