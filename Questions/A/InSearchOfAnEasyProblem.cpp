#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = -1;
    while (n--)
    {
        int check;
        cin >> check;

        if(check == 1)
        temp = check;
    }

    if(temp!=1){
        cout << "EASY";
    }
    else{
        cout << "HARD";
    }   
}