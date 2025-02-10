#include<bits/stdc++.h>
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    long long n,k;
    cin >> n >> k;

    if(k<=(n+1)/2){
        cout << (2*k)-1;
    }
    else{
        cout << (k-(n+1)/2) *2;
    }

}