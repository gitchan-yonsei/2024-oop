#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int main() {
    cout << "a: ";
    double a;
    cin >> a;
    cout << "b: ";
    double b;
    cin >> b;

    double result = sum(a, b);
    cout << "sum: " << result << endl;
}