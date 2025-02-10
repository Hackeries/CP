#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int capacity = 0;
    int current = 0;
    int a , b;
    while(n--){
        cin >> a >> b;

        current+=b;
        current-=a;

        if(current > capacity){
            capacity = current;
        }
    }

    cout << capacity;
}