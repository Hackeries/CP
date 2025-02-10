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








void tolower(string &s) {
    for (char &c : s) {
        c = tolower(c);
    }
}

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
        return true;
    }
    return false;
}

void solve(){
    string a;
    cin >> a;

    tolower(a); 

    for(int i=0;i<a.size();++i){
        if(isVowel(a[i])){
            continue;
        }else{
            cout << '.' << a[i];
        }
    }
    cout << endl;
}

int main(){
    int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}