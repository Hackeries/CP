#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
ll inverse(ll x){return (x,(MOD-2));}
ll gcd(ll a, ll b){return b == 0 ? a : gcd(b,a%b);}
ll binpow(ll base, ll expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        ll temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    int n;cin >> n;
    int l_count = 0;
    int r_count = 0;

    string s;cin >> s;

    for(auto c : s){
        if(c=='L'){
            l_count++;
        }else{
            r_count++;
        }
    }

    cout << (l_count + r_count + 1) << endl;
    // int temp1,temp2;
    // for(int i=0;i<size(s);++i){
    //     if(s[i] == 'L'){
    //         temp1 = -(l_count);
    //     }else{
    //         temp2 = r_count;
    //     }
    // }
    // int max_value = temp2;
    // if((temp1+temp2) == 0){
    //     cout << (l_count + r_count + 1) << endl;
    // }else{
    //     cout << (l_count + r_count + 1) << endl;
    // }


}

int main(){
    ios 
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}