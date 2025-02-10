#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(d>=b && c<=a+d-b){
        cout << (d-b) + (a+d-b-c) << endl;
    }
    else{
        cout << -1 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}