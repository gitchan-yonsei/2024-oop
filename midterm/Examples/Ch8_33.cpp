#include <iostream>

using namespace std;

double &sampleFunction(double &variable) {
    return variable;
}

int main() {
    double input = 100;
    double &result = sampleFunction(input);
    cout << &result;
}
