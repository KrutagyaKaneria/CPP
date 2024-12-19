// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older
#include <iostream>
using namespace std;
int main() {
    int age = 9;
    if(age>18){
        cout << "eligible to vote";
    }
    else{
        cout << "Not eligible to vote";
    }
    return 0;
}