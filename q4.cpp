#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to check if arr2 is a rotation of arr1
int findRotationIndex(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    if (n != arr2.size()) return -1;  // Arrays of different sizes cannot be rotations

    for (int i = 0; i < n; i++) {
        // Check if rotating arr1 by i positions results in arr2
        bool isRotation = true;
        for (int j = 0; j < n; j++) {
            if (arr1[j] != arr2[(i + j) % n]) {
                isRotation = false;
                break;
            }
        }
        if (isRotation) return i;  // Return the rotation index
    }

    return -1;  // No rotation found that matches arr2
}

int main() {
    // Input arrays
    vector<int> arr1 = {1, 3, 2};
    vector<int> arr2 = {2, 3, 1};

    // Find the minimum number of rotations required to match arr1 with arr2
    int rotations = findRotationIndex(arr1, arr2);

    // If the arrays are not rotations of each other
    if (rotations == -1) {
        cout << "arr2 is not a rotation of arr1" << endl;
    } else {
        // Output the result
        cout << "Minimum number of rotations: " << rotations << endl;
    }

    return 0;
}
