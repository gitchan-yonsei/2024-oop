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

    const Money operator+(const Money &amount) {
        int cents1 = cent + dollar * 100;
        int cents2 = amount.getCents() + amount.getDollars() * 100;
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

    Money operator-() {
        return Money(-dollar, -cent);
    }

    bool operator==(const Money &amount) {
        int cents1 = cent + dollar * 100;
        int cents2 = amount.getCents() + amount.getDollars() * 100;

        if (cents1 == cents2) {
            return 1;
        }
        return 0;
    }

private:
    int dollar;
    int cent;
};

int main() {
    Money money1(4, 2), money2(5, 2);
    Money add = money1 + money2;
    bool isSame = money1 == money2;

    cout << add.getDollars() << " dollars " << add.getCents() << " cents" << endl;
    cout << "money1 == money2 ? " << isSame << endl;
}
