#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a, b, l;
    cin >> a >> b >> l;

    ll temp1 = a, temp2 = b;
    ll x = 1 , y = 1;

    while(a < l){
        if(l % a == 0)
            x++;
         else 
            break;
            a = a * temp1;
        
    }

    while(b < l){
        if(l % b == 0)
            y++;
         else 
            break;
            b = b * temp2;
        
    }

    set<ll> s;
    for(int i = 0; i <= x; ++i){

        for(int j = 0; j <= y; ++j){

            ll temp = pow(temp1, i) * pow(temp2, j);
            if(temp <= l && l % temp == 0){
                s.insert(l / temp);
            }
        }
    }
    cout << size(s) <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}