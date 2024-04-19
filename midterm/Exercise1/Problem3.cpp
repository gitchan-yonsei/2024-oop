#include <iostream>

using namespace std;

int main() {
    cout << "Input x: ";
    double x;
    cin >> x;
    double y = 2 * (++x) + 1;

    cout << "Output x: " << x << endl;
    cout << "Output y: " << y << endl;
}