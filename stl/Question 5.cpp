// write a function to connvert multiset into set 

#include <iostream>
#include <set>

using namespace std;

set<int> convertToSet(const multiset<int>& ms) {
    return set<int>(ms.begin(), ms.end());
}

int main() {
    multiset<int> ms = {5, 2, 2, 7, 5, 9};
    set<int> s = convertToSet(ms);

    for (int i : s) cout << i << " ";
}
