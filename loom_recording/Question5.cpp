#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reversevec() {
    vector<double> vec = {1.1,2.2,3.3,4.4};
    reverse(vec.begin(),vec.end());

    cout << "reverse vector is ";
    for(int a : vec)
    cout << a << " ";
    cout << endl;
}

int main(){
    reversevec();
    return 0;
}