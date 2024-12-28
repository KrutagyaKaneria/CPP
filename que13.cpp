// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int cnt = 0;
    for (int i=0 ; i<=len ; i++){
        if(arr[i]==3){
            cnt=cnt+1;
        }
    }

 if(cnt>0){
    cout << "true";
        }
else if(cnt==0){
    cout << "false";
        }    
}