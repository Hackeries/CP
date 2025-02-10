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



bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
void solve(){
    string s;
    getline(cin , s);

    char lastChar = s.back();

    s.pop_back();

    while(s.back() == ' '){
        s.pop_back();
    }


    lastChar = s.back();



    if (isVowel(lastChar)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main(){
    int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}
