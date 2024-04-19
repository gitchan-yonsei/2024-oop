#include <iostream>

using namespace std;

struct Physique {
    int weight;
    int height;
};

int main() {
    Physique David = {70, 175};

    cout << "Weight: " << David.weight << endl;
    cout << "Height: " << David.height << endl;

    return 0;
}
