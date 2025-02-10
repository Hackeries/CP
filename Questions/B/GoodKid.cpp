#include<bits/stdc++.h>
using namespace std;
int main(){
    int num_of_Inp;
    cin >> num_of_Inp;

    while(num_of_Inp--){
        int testcase;
        cin >> testcase;

        int *arr = new int[testcase];
        for(int i=0;i<testcase;++i){
            cin >> arr[i];
        }

        sort(arr,arr+testcase);

        arr[0]=arr[0]+1;
        int prod = 1;
        for(int i=0;i<testcase;++i){
            prod*=arr[i];
        }
        cout << prod << endl;
    }
}