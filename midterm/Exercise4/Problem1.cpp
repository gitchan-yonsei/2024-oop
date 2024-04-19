#include <iostream>

using namespace std;

struct Member {
    string name;
    string email;
};

class Bookstore {
public:
    Bookstore(string name, string email);

    void printMember();
private:
    Member member;
};

Bookstore::Bookstore(std::string name, std::string email) {
    member.name = name;
    member.email = email;
}

void Bookstore::printMember() {
    cout << "name: " << member.name << endl;
    cout << "email: " << member.email << endl;
}

int main() {
    Bookstore gitchan = Bookstore("gitchan", "eunkeeee@naver.com");
    gitchan.printMember();
}