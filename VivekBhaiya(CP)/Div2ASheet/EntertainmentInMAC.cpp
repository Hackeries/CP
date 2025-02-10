#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n;cin >> n;
    string a;cin >> a;

    string b = a;

    reverse(b.begin() , b.end());

    if(a<=b){
       cout << a << endl; 
    }else{
        cout << b << a << endl;
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}



