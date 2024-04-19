#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    long y = 2 * (++x) + 1;
    cout << y << endl;
    return 0;
}