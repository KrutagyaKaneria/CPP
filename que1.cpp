// 1. C++ Code to Check Grade Based on Score. This C++ program determines the grade of a student based on their score.
// Grade Criteria:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include <iostream>
using namespace std; 
#include<string>


string grading(int marks){
    if(marks>90 && marks<=100){
        return "A";
    }
    else if(marks>80 && marks<=90){
        return "B";
    }
    else if(marks>70 && marks<=80){
        return "C";
    }
    else if(marks>60 && marks<=70){
        return "D";
    }
    else if(marks<60){
        return "F";
    }
    else{
        cout << "your marks is not correct";
    }
    return 0;
}



int main() {
    int marks;
    cout << "enter your marks";
    cin >> marks;
    string grade = grading(marks);
    cout << grade;
   
    return 0;
}

