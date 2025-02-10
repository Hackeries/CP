#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> number(2*n);
        for(int i=0;i<2*n;i++)
        cin>>number[i];
        sort(number.begin(), number.end());
        long long add=0;
        for(int i=0;i<2*n;i+=2)
        {
            add=add+min(number[i],number[i+1]);
        }
        cout<<add<<endl;

    }
}