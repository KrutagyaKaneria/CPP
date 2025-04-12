// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream inFile("data.txt");
//     string line;
//     if (inFile.is_open()) {
//         while (getline(inFile, line)) {
//             cout << line << endl;
//         }
//         inFile.close();
//     } else {
//         cout << "Error opening file." << endl;
//     }
//     return 0;
// }


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

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("data.txt", ios::in);
//     if (file.is_open()) {
//         file.seekg(10, ios::beg); // Move to 10th character
//         char ch;
//         file.get(ch);
//         cout << "Character at position 10: " << ch << endl;
//         file.close();
//     } else {
//         cout << "Error opening file." << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in);
    if (file.is_open()) {
        file.seekp(10, ios::beg); // Move to 10th character
        // char ch;
        // file.get(ch);
        // cout << "Character at position 10: " << ch << endl;
        file << "muresh";
        
        file.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}