#include <iostream>
#include <string>

using namespace std;

struct Member {
    string name;
    string email;
};

class Bookstore {
public:
    Bookstore(string name, string email) {
        member.name = name;
        member.email = email;
    }

    void printMember() {
        cout << "name: " << member.name << endl;
        cout << "email: " << member.email << endl;
    }

private:
    Member member;
};

int main() {
    Bookstore gitchan = Bookstore("gitchan", "eunkeeee@naver.com");
    gitchan.printMember();
}