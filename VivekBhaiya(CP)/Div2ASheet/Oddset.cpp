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
    int n;cin >> n;


    vector<int>v(2*n);
    int odd = 0;
    int even = 0;
    for(int i=0;i<2*n;++i){
        cin >> v[i];
    }

    for(int i=0;i<2*n;++i){
        if(v[i]&1){
            odd++;
        }else{
            even++;
        }
    }

    if(even == odd){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}