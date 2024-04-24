#include <iostream>

using namespace std;

int main() {
    cout << "N: ";
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum: " << sum << endl;
}