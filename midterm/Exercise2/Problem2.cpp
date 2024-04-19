#include <iostream>

using namespace std;

int main() {
    cout << "N: ";
    int N;
    cin >> N;

    string star = "";
    for (int i = 0; i < N; ++i) {
        star.append("*");
    }
    star.append("\n");

    for (int i = 0; i < N; ++i) {
        cout << star;
    }

}