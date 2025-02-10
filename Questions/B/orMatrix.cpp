#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    long long m,n;
    cin >> m >> n;

    vector<vector<int>>v(m,vector<int>(n));
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin >> v[i][j];
        }
    }
}