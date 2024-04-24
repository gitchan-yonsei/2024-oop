#include <iostream>

using namespace std;

typedef int *IntArrayPtr;

int main() {
    // 2차원 배열
    IntArrayPtr *m = new IntArrayPtr[3];
    for (int i = 0; i < 3; i++) {
        m[i] = new int[4];
    }
}
