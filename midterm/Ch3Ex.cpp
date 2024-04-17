#include <iostream>

using namespace std;

double average_grade(double, double, double, double);

int main() {
    double average = average_grade(100.0, 94.0, 77.0, 85.0);
    cout << average;
}

double average_grade(double test1, double test2, double test3, double test4) {
    double sum = test1 + test2 + test3 + test4;
    return sum / 4.0;
}