// check if given string is palindrome using deque

#include <iostream>
#include <deque>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string str) {
    deque<char> dq;
    for (char ch : str) {
        if (isalpha(ch)) dq.push_back(tolower(ch));
    }
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) return false;
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}
int main() {
    cout << (isPalindrome("pop") ? "Yes" : "No") << endl;
}