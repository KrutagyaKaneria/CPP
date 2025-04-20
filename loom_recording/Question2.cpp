#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printStringVector() {
    vector<string> vec = {"Apple", "Banana", "Cherry"};

    for (const string& str : vec) {
        cout << str << "\n";
    }
}

int main(){
    printStringVector();
    return 0;
}