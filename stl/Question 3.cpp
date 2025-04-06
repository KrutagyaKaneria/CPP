// In any given array find first repeating element using stl

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int firstRepeatingElement(const vector<int>& arr) {
    unordered_set<int> seen;
    for (int i : arr) {
        if (seen.count(i)) return i;
        seen.insert(i);
    }
    return -1; // No repeating element
}

int main() {
    vector<int> arr = {4, 5, 6, 3, 4, 7, 8};
    cout << "First repeating element: " << firstRepeatingElement(arr) << endl;
}
