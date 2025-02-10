#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin >> n >> k;


    if(k%2 == 0 && n%2){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
int main(){
    long long t;cin >> t;
    while(t--){
        solve();
    }
}