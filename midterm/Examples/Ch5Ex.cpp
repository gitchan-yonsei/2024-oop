#include <iostream>

using namespace std;

int main() {
    int i, a[20];

    for (i = 0; i < 20; ++i) {
        cin >> a[i];
    }

    for (int j = 0; j < 20; ++j) {
        cout << a[j] << endl;
    }
}
