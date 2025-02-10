#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> heights(n);

    for(int i =0 ;i<n;i++){
        cin >> heights[i];
    }

    int maxi = 0;
    int mini = n-1;
    int h;
    for(int i=0;i<n;i++){
        if(heights[i] > heights[maxi]){
            
            maxi = i;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(heights[i] < heights[mini]){
            
            mini = i;
        }
    }

    int solution = maxi + (n-1-mini);

    if(maxi < mini){
        cout << solution;
    }
    else{
        cout << solution-1;
    }
}