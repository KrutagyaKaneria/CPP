#include <iostream>
using namespace std;

// Function to find all pairs whose sum is equal to the target using brute force
void findPairsBruteForce(int nums[], int n, int target) {
    bool foundPair = false; // Flag to check if we found any pair

    // Iterate over all pairs using two loops
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the sum of the pair equals the target
            if (nums[i] + nums[j] == target) {
                // Output the indices of the pair
                cout << "[" << i << ", " << j << "]" << endl;
                foundPair = true;
            }
        }
    }

    // If no pair was found, print a message
    if (!foundPair) {
        cout << "No pairs found!" << endl;
    }
}

int main() {
    int nums[] = {2, 7, 11, 15}; // Input array
    int n = sizeof(nums) / sizeof(nums[0]); // Length of the array
    int target = 9; // Target sum

    // Call the function to find pairs
    cout << "Pairs with sum " << target << ":" << endl;
    findPairsBruteForce(nums, n, target);

    return 0;
}