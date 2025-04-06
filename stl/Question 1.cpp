// remove duplicates and sort elements from list = {8,7,3,2,3,6,8} 

#include <iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    list<int> l = {8,7,3,2,3,6,8};

    set<int> s(l.begin(), l.end());
    
    list<int> result(s.begin(), s.end());

    for (int i : result) cout << i << " ";
    return 0;
}