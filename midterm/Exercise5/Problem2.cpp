#include <iostream>

using namespace std;

int main() {
    string firstName;
    cout << "firstName: ";
    cin >> firstName;

    string lastName;
    cout << "lastName: ";
    cin >> lastName;
    cout << endl;

    string fullName = firstName + " " + lastName;
    cout << fullName;
}