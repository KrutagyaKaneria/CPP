#include <iostream>
using namespace std ; 


void agegroup(int age){
    if(age < 13){
        cout << "child";
    }
    else if (age >= 13 && age <=19){
        cout  << "Teenager";
    }
    else if (age >= 20 && age <=50){
        cout  << "adult" ; 
    }
    else if(age > 50){
        cout << "seniourcitizen";
    }
}


int main(){
    int age;
    cout << "enter your age";
    cin >> age;
    agegroup(age);
}