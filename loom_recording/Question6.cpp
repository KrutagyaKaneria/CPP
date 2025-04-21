#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void sumVectorElemennt() {
    vector<int> vec = {5,10,15,20};
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "sum of elements: " << sum << '\n' ;
}

int main(){
    sumVectorElemennt();
    return 0;
}