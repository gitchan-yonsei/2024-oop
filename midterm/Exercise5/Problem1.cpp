#include <iostream>

using namespace std;

int main() {
    string s1;
    cout << "s1: ";
    cin >> s1;

    string s2;
    cout << "s2: ";
    cin >> s2;
    cout << endl;

    cout << "Longer String is " << endl;
    if (s1.length() > s2.length()) {
        cout << s1;
    } else if (s1.length() < s2.length()) {
        cout << s2;
    }
}