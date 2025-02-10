#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >>n>> k>> l>> c>> d>> p>> nl>> np;

    int tLimes = c*d;
    int tDrinks = k*l;

    int x= tDrinks / (n*nl);
    int y= tLimes / n;
    int z= p / (n*np);

    int res = min(x,min(y,z));

    cout << res;
}