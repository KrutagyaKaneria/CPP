#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    // v.push_back(40); 
    // output:- 10 20 30 40 
    // this will add a element at the end of vector
    
    // v.pop_back();
    // output:- 10 20
    // this will delete last element of vector
    
    // v.insert(v.begin(),5);
    // output:- 5 10 20 30
    // this will add a element  as per the position and value we give
    
    
    // v.insert(v.begin() + 1,15);
    // output:- 10 15 20 30 
    // it is same but we can axcess index by add number after begin
    
    // v.erase(v.begin()+1);
    // output:- 10 30 
    // it will remove the value as per we give him position
    
    // v.clear();
    // output:- blank
    // it will remove all values from vector
    
    
    // cout << "first"<< v.front();
    // output:- 10
    // it will print the first element of vector
    
    
    // cout << "size" << v.size();
    // output:- 3
    // it will give total number of element
    // output:-
    
    // cout << "size" << v.back();
    // output:- 30
    // it will give the last element of  the vector 
    
    // cout << "size" << v.at(2);
    // output:- 30
    // Returns the element at the specified index
    
    // cout << "size" << v.empty();
    // output - 1(false)
    // it will give true false as vector is empty or not 
    
    
    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}
