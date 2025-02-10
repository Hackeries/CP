#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    int count_A = count(str.begin() , str.end() , 'A');
    
    int count_B = count(str.begin() , str.end() , 'B');
    
    
    if(count_A > count_B){
        cout << "A" << endl;
    }
    else{
        cout << "B" << endl;
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