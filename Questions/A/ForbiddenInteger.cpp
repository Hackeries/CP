#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=0;i<n;++i){
            cout << "1 ";
        }
        cout << endl;
    }
    else{
        if(k>=2 && n%2==0){
            cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i=0;i<n/2;++i){
                cout << "2 ";
            }
            cout << endl;
        }
        else if(k>=3 && n%2==1){
            cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i=0;i<n/2-1;++i){
                cout << "2 ";
            }
            cout << "3 " << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
