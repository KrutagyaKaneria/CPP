#include <iostream>
using namespace std;


bool endsWithBruteForce(string str, char ch) {

    if (str.length() == 0) {
        return false; 
    }


    if (str[str.length() - 1] == ch) {
        return true; 
    }
    return false; 

int main() {
    string inputString = "codinggita"; 
    char targetChar = 'a'; 

    if (endsWithBruteForce(inputString, targetChar)) {
        cout << "Output: true" << endl;  
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}
}