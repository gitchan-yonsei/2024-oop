#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 100;
    int b = 200;

    cout << "a: " << a << ", b: " << b << endl;

    swap(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
}