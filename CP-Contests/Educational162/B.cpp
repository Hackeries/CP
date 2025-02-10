#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canDefeatMonsters(vector<int>& distances, vector<int>& healths, int k) {
    vector<pair<int, int>> monsters;
    for (size_t i = 0; i < distances.size(); ++i) {
        if (distances[i] != 0) { // Exclude monsters already at 0
            monsters.push_back({abs(distances[i]), healths[i]});
        }
    }

    // Sort monsters by distance
    sort(monsters.begin(), monsters.end());

    int time = 0;
    long long bullets = 0;
    for (auto& monster : monsters) {
        int travelTime = monster.first - time;
        bullets += (long long)travelTime * k; // Accumulate bullets over time
        if (bullets < monster.second) {
            return false; // Not enough bullets to defeat this monster
        }
        bullets -= monster.second; // Use bullets to defeat the monster
        time = monster.first; // Update time to current monster's defeat time
    }

    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> distances(n), healths(n);
    for (int& distance : distances) cin >> distance;
    for (int& health : healths) cin >> health;

    if (canDefeatMonsters(distances, healths, k)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}