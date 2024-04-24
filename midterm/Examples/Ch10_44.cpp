#include <iostream>

using namespace std;

class Complex {
public:
    Complex(int r = 0, int i = 0);

    ~Complex();

    void ShowComplex() const;

private:
    int real;
    int image;
};

Complex::Complex(int r, int i)
        : real(r), image(i) {
}

Complex::~Complex(){
    cout << "소멸자 호출" << endl;
}

void Complex::ShowComplex() const {
    cout << "real: " << real << " , image: " << image << endl;
}

int main() {
    Complex x(10, 20);
    Complex y(30);
    Complex z;

    x.ShowComplex();
    y.ShowComplex();
    z.ShowComplex();
}
