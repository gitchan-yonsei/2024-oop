#include <iostream>

using namespace std;

void modifyArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        arr[i] = 0;
    }
    cout << "sum: " << sum << endl;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    modifyArray(a, 5);

    for (int i = 0; i < 5; ++i) {
        cout << a[i] << "\t";
    }
}