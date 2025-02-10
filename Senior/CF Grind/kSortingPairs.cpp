#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int count_disqualified_players(int N, int K, vector<pair<int, int>>& records) {
    unordered_map<pair<int, int>, int> picks;
    set<int> disqualified_players;

    for (auto& record : records) {
        int player_id = record.first;
        int ball_number = record.second;
        
        pair<int, int> key = {player_id, ball_number};
        
        if (picks.find(key) == picks.end()) {
            picks[key] = 0;
        }
        
        picks[key]++;
        
        if (picks[key] > K) {
            disqualified_players.insert(player_id);
        }
    }
    
    return disqualified_players.size();
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<pair<int, int>> records(N);
    for (int i = 0; i < N; ++i) {
        int player_id, ball_number;
        cin >> player_id >> ball_number;
        records[i] = {player_id, ball_number};
    }
    
    int disqualified_count = count_disqualified_players(N, K, records);
    cout << disqualified_count << endl;
    
    return 0;
}
