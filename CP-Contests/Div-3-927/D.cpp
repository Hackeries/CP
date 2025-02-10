#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char trump;
    cin>>trump;
    map<char, vector<int>> cards;
    int trump_ctr = 0;
    for (int i=0; i<2*n; i++){
        string card;
        cin>>card;
        cards[card[1]].push_back(card[0] - '0');
        sort(cards[card[1]].begin(), cards[card[1]].end());
        if (card[1] == trump) trump_ctr++;
    }


    int non_trump_odd = 0;
    //Check for the impossible case
    for (auto x : cards){
        if (x.first != trump && ((x.second.size())&1)){
           non_trump_odd++; 
        }
    }


    

    if (non_trump_odd > trump_ctr){
        cout<<"IMPOSSIBLE\n";
        // cout<<non_trump_odd<<" "<<trump_ctr<<endl;
        return;
    }
    else{
        int accessed_trump = 0; 
        for (auto x : cards){
            //Non trump && even
            if (x.first != trump && (!(x.second.size()&1))){
                int start = 0;
                int end = x.second.size()-1;
                while (start < end){
                    cout<<x.second[start++]<<x.first<<" "<<x.second[end--]<<x.first<<endl;
                }
            }
            else if (x.first == trump) continue;

            else if (x.first != trump && (x.second.size()&1)){
                int start = 0;
                int end = x.second.size()-1;
                while (start != end){
                    cout<<x.second[start++]<<x.first<<" "<<x.second[end--]<<x.first<<endl;
                }
                cout<<x.second[start]<<x.first<<" "<<cards[trump][accessed_trump++]<<trump<<endl;
            }
        }
        //Now printing left over trump cards
        int t_start = accessed_trump;
        int t_end = cards[trump].size()-1;
        while (t_start < t_end){
            cout<<cards[trump][t_start++]<<trump<<" "<<cards[trump][t_end--]<<trump<<endl;
        } 
        return;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}