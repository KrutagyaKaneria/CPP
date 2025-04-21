#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countOccurrences() {
    vector<int> vec = {1,2,2,3,2,4};
    int target = 2;

    int countNum = count(vec.begin(), vec.end(), target);
    cout << "Element " << target << " occurs " << countNum << " timmes.\n" ;
}

int main(){
    countOccurrences();
    return 0;
}