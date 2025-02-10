#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    
    int n;
    cin >> n ;
    string x;cin >> x;

    int sum = 0;

    int checkOdd = 0;
    vector<int>oddDigits;
    for(char c:x){
        int digits = c - '0';
        sum+=digits;
        if(digits % 2 != 0){
            checkOdd++;
            oddDigits.push_back(digits);
        }
    }
    // cout << checkOdd << endl;

    

    if(checkOdd <= 1){
        cout << -1 << endl;
    }else{
        cout << oddDigits[0] << oddDigits[1] <<endl;
    }

    
















    // lli n, x;
    // cin >> n >> x;

    // lli sum = 0;
    // lli checkOdd = 0;
    // vector<int>v;
    // for(int i=0;i<n;++i){
    //     int digit = x%10;
    //     sum+=digit;

    //     if(digit %2 !=0){
    //         checkOdd++;

    //         v.push_back(digit);
    //     }
    // }

    // if(checkOdd <= 1){
    //     cout << -1 << endl;
    // }else{
    //     cout << v[0] << v[1] << endl;
    // }
    
    
}

int main(){
    ios;
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
