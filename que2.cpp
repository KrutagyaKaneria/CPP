// 2. Write a function to determine whether a given number is positive, negative, or zero.

#include <iostream>
using namespace std; 

void typeofnumber (int number){
    if(number>0){
        cout << "yes it is a positive number";
    }
    else if(number<0){
        cout << "yes it is negetive nummber";
    }
    else{
        cout << "input error";
    }
}

int main(){
    int number;
    cout << "enter your number";
    cin >> number;
    typeofnumber(number);
}
