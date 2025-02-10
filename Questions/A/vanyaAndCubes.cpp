#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    int height = 0;

    for(int i=1;i<=n;i++){
        count+=i;

        if(count<=n)
        height++;

        n-=count;
    }

    cout << height;
}