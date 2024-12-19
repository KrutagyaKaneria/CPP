// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"

// "yellow" → "Slow down"

// "green" → "Go"

#include <iostream>
using namespace std;
int main() {
    string userinput;
    cout << "enter lights";
    cin >> userinput;
    string light1 = "red";
    string light2 ="yellow";
    string light3 = "green";
    
    if(userinput==light1){
        cout << "stop";
    }
    else if(userinput==light2){
        cout << "wait and be ready";
    }
    else if(userinput==light3){
        cout << "go";
    }
    else{
        cout << "input error";
    }
    return 0;
}
