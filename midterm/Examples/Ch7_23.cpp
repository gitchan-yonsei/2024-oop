#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 3;

    int result = add(x, y);

    std::cout << "result: " << result << std::endl;

    return 0;
}
