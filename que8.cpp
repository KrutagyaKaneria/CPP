// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5];
// Output: 3


#include <iostream>  
using namespace std;
void average(int arr[], int len, int sum) {
    for (int i = 0; i < len; i++) {
        sum = sum + arr[i];
    }
    int avg = sum / len;
    cout << "The average is: " << avg << endl;
}

int main() {
    int sum = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    average(arr, len, sum); 
    return 0;
}
