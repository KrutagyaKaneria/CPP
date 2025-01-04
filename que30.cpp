#include <iostream>
using namespace std;

void sum(int n){
    int evensum=0;
    int oddsum=0;

    while(n>0){
        int digit = n%10;
        if(n%2==0){
            evensum += digit; 
        }
        else{
            oddsum += digit;
        }
        n /= 10;
    }
    cout << evensum << endl;
    cout << oddsum;
}

int main(){
    int n ;
    cout << "enter your number";
    cin >> n;
    sum(n);
    return 0; 
}