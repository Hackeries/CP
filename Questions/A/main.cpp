#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int ans=0;
    while(x!=0){
        int digits = x % 10;
        ans = ans*10 + digits;
        x = x / 10;
    }
    
    int *arr = new int [ans];
    int maxi = INT_MIN;

    for(int i=0;i<x;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    cout << maxi << endl;
    delete[] arr;

}


#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    // Handle the first digit separately
    int firstDigit = x % 10;
    int invertedFirstDigit = min(firstDigit, 9 - firstDigit);

    long long result = invertedFirstDigit;
    x /= 10;

    // Process the remaining digits
    while (x > 0) {
        int digit = x % 10;
        int invertedDigit = min(digit, 9 - digit);
        result = result * 10 + invertedDigit;
        x /= 10;
    }

    cout << result << endl;

    return 0;
}
