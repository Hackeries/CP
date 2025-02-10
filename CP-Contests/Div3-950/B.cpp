// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define mp make_pair
// #define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;
// void solve(){
//     int n,f,k;
//     cin >> n >> f >> k;
//     vector<int>v(n);
//     for(int i=0;i<n;++i){
//         cin >> v[i];
//     }
//     int fav = v[f-1];
//     sort(v.begin() , v.end());
//     reverse(v.begin() , v.end());

//     bool rm = true;
//     bool n_rm = true;

//     for(int i=0;i<k;++i){
//         if(v[i] == fav){
//             n_rm = false;
//         }
//     }

//     for(int i=k;i<n;++i){
//         if(v[i] == fav){
//             rm = false;
//         }
//     }


//     if(n_rm){
//         cout << "NO" << endl;
//     }else if(rm){
//         cout << "YES" << endl;
//     }else{
//         cout << "MAYBE" << endl;
//     }


// }

// int main(){
//     int t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n,f,k,pos,i,index;
//     cin>>n>>f>>k;
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     pos=a[f-1];
//     sort(a,a+n);
//     reverse(a,a+n);
//     for(i=0;i<n;i++)
//     {
//         if(a[i] == pos)
//         index=i;
//         // break;
//     }
//     i=0;
//     while(a[i]!=pos && i<n)
//     {
//         i++;
//     }
//     if(i>k-1)
//     cout<<"NO" << endl;
//     else if(i<k-1)
//     {
//         cout<<"YES" << endl;
//     }
//     else cout<<"MAYBE" << endl;
// }
// signed main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;//no. of test cases
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
// }


