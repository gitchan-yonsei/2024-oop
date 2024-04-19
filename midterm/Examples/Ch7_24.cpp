#include <iostream>

using namespace std;

class BankAccount {
public:
    BankAccount(int balance) : m_balance(balance) {}

    int getBalance() const {
        return m_balance;
    }

    void deposit(int amount) {
        m_balance += amount;
    }

private:
    int m_balance;
};

void printAccountBalance(const BankAccount &account) {
    std::cout << "Balance: " << account.getBalance() << std::endl;
}

int main() {
    BankAccount account = BankAccount(100);
    printAccountBalance(account);
}