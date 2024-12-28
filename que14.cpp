// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

#include <iostream>
using namespace std;


void Addelement(int arr,int len,int newElement){
    int updatedlen=len+1;
    int updatedarr[updatedlen];

    updatedarr[0] = newElement;

    for(int i=0;i<=len;i++){
        updatedarr[i+1] = arr[i];
    }
    for (int i=0; i< updatedlen ;i++){
        cout << updatedarr[i] << "  ";
    }
}
int main(){
    int arr[]={1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int newElement = 0;
    Addelement(arr,len,newElement);
    return 0;
}