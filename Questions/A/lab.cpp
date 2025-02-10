#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int cs = 0;
    int ms = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs < 0){
            cs = 0;
        }
        else if(ms > cs){
            continue;
        }
        else{
            ms = cs;
        }
    }
    cout << ms;
}