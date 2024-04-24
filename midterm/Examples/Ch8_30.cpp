#include <iostream>

using namespace std;

int main() {
    int robert = 100;
    int *ptr = &robert;
    int &bob = robert;

    cout << "robert: " << robert << endl; // 100
    cout << "ptr: " << ptr << endl; // 0x16f31739c
    cout << "*ptr: " << *ptr << endl; // 100
    cout << "&bob: " << &bob << endl; // 0x16f31739c
    cout << "bob: " << bob << endl; // 100
}
