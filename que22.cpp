// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

#include <iostream>
#include <iterator>
using namespace std;

int findLengthIterators(string str) {
    return distance(str.begin(), str.end());
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using Iterators): " << findLengthIterators(inputString) << endl;
    return 0;
}