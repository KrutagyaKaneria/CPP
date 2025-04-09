#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("data.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile("data.txt"); // Create and open file
//     if (outFile.is_open()) {
//         outFile << "krutagya is the best" << endl;
//         outFile << "jai yogeshwar";
//         outFile.close();
//         cout << "Data written successfully." << endl;
//     } else {
//         cout << "Error opening file." << endl;
//     }
//     return 0;
// }