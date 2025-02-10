#include<bits/stdc++.h>
using namespace std;
#define ll long long
// void solve(){
//     if(x<5)

// }
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int x;
    cin >> x;

    // int record = x;
    if(x<=5)
    cout << 1 << endl;
    else{
        int record = x/5;
        if(x%5 != 0){
            cout << record + 1 << endl;
        }
        else{
            cout << record << endl;
        }
    }
}