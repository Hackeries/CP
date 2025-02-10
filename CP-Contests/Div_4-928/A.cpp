#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string n;
    cin >> n;

    int c = 0;
    for(auto x:n){
        if(x == 'A')
        c++;
    }
    if(c>=(size(n) - c)){
        cout << "A" << endl;
    }
    else{
        cout << "B" << endl;
    }

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