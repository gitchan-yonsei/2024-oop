#include <iostream>

using namespace std;

void func1(int a, int b) {
    a = a + b;
}

void func2(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a = 3;
    int b = 5;

    func1(a, b);
    cout << "After Call By Value" << endl;
    cout << "a=" << a << ", b=" << b << endl;

    func2(&a, &b);
    cout << "After Call By Reference" << endl;
    cout << "a=" << a << ", b=" << b << endl;
}