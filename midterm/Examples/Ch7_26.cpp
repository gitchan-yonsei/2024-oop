#include <iostream>

using namespace std;

class MathUtils {
public:
    static int add(int x, int y) {
        return x + y;
    }

    static int multiply(int x, int y) {
        return x * y;
    }
};

int main() {
    cout << "Addition: " << MathUtils::add(5, 3) << endl;
    cout << "Multiplication: " << MathUtils::multiply(4, 2) << endl;

    return 0;
}
