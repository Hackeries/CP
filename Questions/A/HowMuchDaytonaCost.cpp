#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		bool check = 0;
		for(int i = 0; i < n; ++i){
			int ar;
			cin >> ar;
			if(ar==k)
            check=1;
		}
		if(check)
        cout << "YES" << endl;
		else
        cout << "NO" << endl;
	}
}