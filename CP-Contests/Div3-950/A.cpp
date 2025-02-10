#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;

    string a;
    cin >> a;

    map<char,int>count;
    for(char c : a)
    count[c]++;


    int mini = 0;
    for(int i='A';i<='G';++i){
        if(count[i] < m){
            mini+=(m-count[i]);
        }
    }
    cout << mini << endl;
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}