#include <iostream>
#include <cstring>

class String {
private:
    char *data;
public:
    // 생성자
    String(const char *p) {
        if (p) {
            this->data = new char[strlen(p) + 1];
            strcpy(data, p);
        } else {
            this->data = new char[1];
            *data = '\0';
        }
    }

    // 소멸자
    ~String() {
        delete[] data;
    }

    // 복사 생성자 (깊은 복사)
    String(const String &other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "복사 생성자 실행: 깊은 복사 완료" << std::endl;
    }

    // 데이터를 출력하는 함수
    void print() const {
        std::cout << data << std::endl;
    }

    // 데이터의 주소를 출력하는 함수
    void printAddress() const {
        std::cout << reinterpret_cast<const void *>(data) << std::endl;
    }
};

int main() {
    String s1("Hello");
    String s2 = s1; // 복사 생성자가 호출됨 (깊은 복사)

    s1.print(); // "Hello"
    s2.print(); // "Hello"

    s1.printAddress(); // 예: 0x1000
    s2.printAddress(); // 예: 0x2000 (다른 주소)

    return 0;
}
