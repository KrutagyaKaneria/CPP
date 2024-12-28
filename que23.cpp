// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

#include <iostream>
using namespace std;

string concatenateWithAppend(string str1, string str2) {
    str1.append(str2); 
    return str1; 
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Using append()): " << concatenateWithAppend(str1, str2) << endl;
    return 0;
}

