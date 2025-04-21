#include <iostream>
#include <list>
#include <string>
using namespace std;

void addElementsTOList() {
    list<string> myList = {"red","green","blue"};

    for(const string& s : myList){
        cout << s << "\n";
    }
}

int main(){
    addElementsTOList();
    return 0;
}

