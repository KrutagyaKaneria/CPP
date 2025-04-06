// Sort the unorderd_multiset using any sorting algorithm

#include <iostream>
#include <unordered_multiset>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unordered_multiset<int> ums = {4, 2, 5, 3, 5, 2};

    // Copy to vector
    vector<int> sorted(ums.begin(), ums.end());

    // Sort using STL sort
    sort(sorted.begin(), sorted.end());

    for (int i : sorted) cout << i << " ";
}

