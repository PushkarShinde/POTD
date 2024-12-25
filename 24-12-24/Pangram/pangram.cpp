#include <bits/stdc++.h>
using namespace std;

void check(string s) {
    set<char> uniqueLetters; 
    /*
    A set is a container in C++ from the Standard Template Library (STL). It:
        Stores unique elements in sorted order.
        Automatically ensures there are no duplicate elements.
    */

    // Insert all characters into the set
    for (char c : s) {
        uniqueLetters.insert(c);
    }

    // If set contains all 26 letters, it's a pangram
    if (uniqueLetters.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    int n; // Length of the string
    cin >> n;

    string s;
    cin >> s;

    // Convert the string to lowercase
    for (char &c : s) {
        c = tolower(c);
    }

    // Check if it's a pangram
    if (s.length() >= 26) {
        check(s);
    } else {
        cout << "NO";
    }

    return 0;
}
