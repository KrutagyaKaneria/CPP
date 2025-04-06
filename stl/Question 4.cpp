// given a string return the charactors in sorted order . [higher.....lower]

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "hackathon";
    sort(s.begin(), s.end(), greater<char>()); // Sort in descending order
    cout << s << endl;
}
