#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;

    if(n<=2){
        cout << 1 << endl;
    }
    else{
        cout << ceil((double)(n-2)/x) + 1 << endl;
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