#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;

int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}
bool check(char c){
    return(c>='5' && c<='9');
}
void solve(){
    string x;
    cin >> x;

    if(check){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}