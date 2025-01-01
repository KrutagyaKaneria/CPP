// #include <iostream>
// using namespace std;


// void largest (int number1,int number2){
//     if(number1>number2){
//         cout << "number1 is the largest";
//     }
//     else{
//         cout << "number2 is the largest";
//     }
// }

// int main(){
//     int number1=10;
//     int number2=20;
//     largest(number1,number2);
//     return 0;
// }

// void largest()


#include <iostream>
#include <algorithm> // Include to use the max function
using namespace std;

// Function to print the largest number using max function
void printLargestNumberMax(int number1, int number2) {
    // Use the max function to find and print the largest number
    cout << "The largest number is: " << max(number1, number2) << endl;
}

int main() {
    int number1 = 10; // First input number
    int number2 = 20; // Second input number

    // Call the function to print the largest number
    printLargestNumberMax(number1, number2);

    return 0;
}
