#include <iostream>  
using namespace std;

void isCentury(int year) {

    if (year % 100 == 0) {
        cout << year << " is a Century Year." << endl;  
    } else {
        cout << year << " is not a Century Year." << endl;  
    }
}

int main() {
    int year;  

    cout << "Enter a year: ";  
    cin >> year;  

    isCentury(year);  
    return 0;  
}