#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findInVector() {
    vector<int> vec = {10,20,30,40,50};
    int target = 50;

    auto it =find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        cout << "element found at index:" << (it - vec.begin()) << "\n";
    } else {
        cout << "element not found";
    }
}

int main(){
    findInVector();
    return 0;
}