#include <iostream>

using namespace std;

typedef double *DoublePtr;

int main() {
    DoublePtr d;
    d = new double[10];

    delete[] d;
    d = NULL;
}
