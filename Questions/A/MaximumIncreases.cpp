#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int currLen = 1;
    int maxLen = 1; 

    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            currLen++;
        }
        else{
            currLen = 1;
        }
    }
    if(maxLen < currLen){
        maxLen = currLen;
    }
    cout << maxLen;
}