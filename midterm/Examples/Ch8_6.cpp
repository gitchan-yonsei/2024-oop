#include <iostream>

using namespace std;

class Money {
public:
    Money(int dollar, int cent)
            : dollar(dollar), cent(cent) {
    }

    int getDollars() const {
        return dollar;
    }

    int getCents() const {
        return cent;
    }

private:
    int dollar;
    int cent;
};

const Money operator+(const Money &amount1, const Money &amount2) {
    int cents1 = amount1.getCents() + amount1.getDollars() * 100;
    int cents2 = amount2.getCents() + amount2.getDollars() * 100;
    int allCents = cents1 + cents2;
    int absAllCents = abs(allCents);
    int finalDollars = absAllCents / 100;
    int finalCents = absAllCents % 100;

    if (allCents < 0) {
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }

    return Money(finalDollars, finalCents);
}

int main() {
    Money money1(4, 2), money2(5, 2);
    Money add = money1 + money2;

    cout << add.getDollars() << " dollars " << add.getCents() << " cents";
}
