#include <iostream>
using namespace std;
#include <string>

string getelement(string filename){
    int pos = filename.rfind('.');
    cout << pos;
    return filename.substr(pos+1);
    
}


int main(){
    string filename = "coding.gita.students";
    cout << getelement(filename);

}