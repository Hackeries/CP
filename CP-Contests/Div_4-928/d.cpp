#include <iostream>
#include <vector>
#include <set>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> numbers(n);
        for (int &num : numbers) {
            std::cin >> num;
        }

        
        std::set<int> uniqueOrResults;
        for (int num : numbers) {
            std::set<int> newOrResults;
            for (int existing : uniqueOrResults) {
                newOrResults.insert(num | existing);
            }
            newOrResults.insert(num);
            uniqueOrResults.insert(newOrResults.begin(), newOrResults.end());
        }

        std::cout << uniqueOrResults.size() << std::endl;
    }

    return 0;
}