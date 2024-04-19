#include <iostream>
#include <cstdlib>

using namespace std;

class DayOfYear {
public:
    DayOfYear(int month, int day);

    DayOfYear(int month);

    DayOfYear();

    void input();

    void output() {
        cout << month << "월 " << day << "일" << endl;
    };

    int getMonth();

    int getDay();

private:
    int month;
    int day;

    void validateDate();
};

int main() {
    DayOfYear date1(4, 16), date2(8, 10), date3(3, 1), date4;

    date1.output();
    date2.output();
    date3.output();
    date4.output();
}

DayOfYear::DayOfYear(int month, int day)
        : month(month), day(day) {
    validateDate();
}

DayOfYear::DayOfYear(int month)
        : month(month), day(1) {
    validateDate();
}

DayOfYear::DayOfYear()
        : month(1), day(1) {
}

void DayOfYear::validateDate() {
    if (month < 1 || month > 12) {
        exit(1);
    }
    if (day < 1 || day > 31) {
        exit(1);
    }
}
