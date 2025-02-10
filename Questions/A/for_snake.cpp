#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;

    for(int row = 0; row < n; row++){
        if((row % 4 == 0) || (row % 4 == 2)){
            for(int col = 0; col < m; col++)
                cout << "#";
                cout << endl;
            
        }

        if(row % 4 == 1){
            for(int col = 0; col < m-1; col++)
                cout << ".";
                cout << "#";
                cout << endl;
            
        }

        if(row % 4 == 3){
            cout << "#";
            for(int col = 0; col < m-1; col++)
                cout << ".";
                cout << endl;
            
        }
    }
}