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

void solve(){
    string a,b;
    cin >> a >> b;

    if(!a.empty() && !b.empty()){
    swap(a[0] , b[0]);
    }

    cout << a << " " << b << endl;

}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}