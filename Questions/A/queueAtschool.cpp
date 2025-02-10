#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , t;
    cin >> n >> t;

    string s;
    cin >> s;
    while(t--){
        for(int i = 0;i<s.size();i++){
            int high = i;
            int low = i+1;
            if(s[high] == 'B' && s[low] == 'G'){
                swap(s[high] , s[low]);
                // high+=2;
                // low+=2;
                i++;
            }
        }
    }
    cout << s;
}