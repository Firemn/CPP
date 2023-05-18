#include <cstdio>
#include <string>
class A {
private:
    std::string num;
    std::string name;
    double money;
public:
    explict A() {
        this->name = "";
        this->num = "";
        this->money = 0.0;
    }
    explict A(std::string name, std::string num) {
        this->name = name;
        this->num = num;
        this->money = 0.0;
    }
    explict A(std::string name, std::string num, double money) {
        this->name = name;
        this->num = num;
        this->money = money;
    }
    ~A();
    void show() {
        printf("name : %s\nnum : %s\nmoney : %lf\n", this->name.c_str(), this->num.c_str(), this->money);
    }
};
int main(void) {
    return 0;
}