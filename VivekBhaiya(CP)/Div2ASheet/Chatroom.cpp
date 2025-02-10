#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
int binpow(int base, int expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        int temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}
int inverse(int x){
    return (x,(MOD-2));
}
int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}

void solve(){
    string s;cin >> s;
    string target = "hello";
    int k;

    for(int i=0;i<size(s);++i){
        if(s[i] == target[k]){
            k++;
        }
    }

    if(k == target.size()){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}

int main(){
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}