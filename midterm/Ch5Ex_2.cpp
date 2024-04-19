#include <iostream>

using namespace std;

int out_of_order(double[], int size);

int main() {
    double a[10] = {1.2, 2.1, 3.3, 3.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
    out_of_order(a, 10);
}

int out_of_order(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return -1;
        }
    }
}
