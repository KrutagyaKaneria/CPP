// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:

// Input: [1, 2, 3, 4, 5]

// Output: Even: 2, Odd: 3


#include <iostream>
using namespace std;


void evenodd(int arr[],int len){
    int odd=0;
    int even=0;
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
cout << "odd:-" <<odd;
cout << "even:-" <<even;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    evenodd(arr,len);
}