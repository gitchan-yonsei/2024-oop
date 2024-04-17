#include <iostream>

using namespace std;

int main() {
    cout << "Weight: ";
    double weight;
    cin >> weight;

    cout << "Height: ";
    double height;
    cin >> height;

    double bmi = weight / (height * height) * 100;

    cout << "BMI: " << bmi << endl;
}