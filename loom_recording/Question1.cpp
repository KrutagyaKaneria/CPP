#include <iostream>
#include <vector>
using namespace std;

void elementadd() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Vector elements: ";
    vec.push_back(60);
    for(int val : vec) {
        cout << val << " ";
    }
}
int main() {
    elementadd(); 
    return 0;
}

