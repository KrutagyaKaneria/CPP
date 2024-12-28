// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".
#include <iostream>
using namespace std;

string uppercase(string str){
    for(int i=0;i<=str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    return str;
}

int main() {
    string input = "hello";
    cout << uppercase(input);
    return 0;
}



// #include <iostream>
// using namespace std;

// string toUpperCaseToupper(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
//     return str; 
// }

// int main() {
//     string input = "hello";
//     cout << toUpperCaseToupper(input) << endl;
//     return 0;
// }



