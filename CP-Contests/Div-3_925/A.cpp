#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<char>v(27);
    char ch = 'a';
    for(int i=1;i <= 26;++i){
        v[i] = ch++;
    }
    
    if(n<=28){
        int temp = n-2;
        cout << "aa" << v[temp] << endl;
    }
    else if(n<=53){
        n-=26;
        int temp = n-1;
        cout << "a" << v[temp] << "z" << endl;
    }
    else{
        n-=52;
        int temp = n;
        cout << v[temp] << "zz" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}