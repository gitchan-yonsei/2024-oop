#include <iostream>

using namespace std;

int main() {
    int x = 21;
    int *ptr = &x;
    cout << x << endl;

    *ptr = 10;
    cout << x << endl;
}