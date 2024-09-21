#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSacksRobbed(vector<int>& sacks) {
    int n = sacks.size();
    int maxRobbed = 0;

    for (int i = 0; i < n; i++) {
        int minSacks = sacks[i];  

        for (int j = i; j < n; j++) {
    
            minSacks = min(minSacks, sacks[j]);
            int totalRobbed = minSacks * (j - i + 1);
            // Updating  the maximum sacks
            maxRobbed = max(maxRobbed, totalRobbed);
        }
    }

    return maxRobbed;
}

int main() {
    int n;
    cout << "Enter the  warehouses: ";
    cin >> n;

    vector<int> sacks(n);
    cout << "Enter the number of sacks in war: ";
    for (int i = 0; i < n; i++) {
        cin >> sacks[i];
    }

    int result = maxSacksRobbed(sacks);
    cout << "The maximum number of sacks the thief can rob is: " << result << endl;

    return 0;
}
