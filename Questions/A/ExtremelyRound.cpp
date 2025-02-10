#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    // int n;cin >>n;
    // if(n<10){
    //     cout << 9 << endl;
    // }
    // else{
    //     int extra = n/10;
    //     cout << (9+extra) << endl;
    // }

    string n;cin >> n;
    int store_size = n.size();

    int convert_int = n[0] - '0';

    cout << ((store_size-1)*9 + convert_int )<< endl;
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}