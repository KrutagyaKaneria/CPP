#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortVector() {
    vector<int> vec = {40,10,30,50,20};
    sort(vec.begin(), vec.end());

    cout << "Sorted vector" ;
    for (int a : vec) cout << a << " ";
    cout << endl;
}

int main(){
    sortVector();
    return 0;
}