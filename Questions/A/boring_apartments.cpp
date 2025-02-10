#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int length = 0;
        int digit = (x%10) - 1;
        while(x>0){   
            x/=10;
            length++;
        }
        int len = length*(length+1)/2;
        int ans = (digit*10) + len;
        cout << ans << endl;
    }
}