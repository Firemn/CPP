#include <cstdio>
#include <memory>
#include <string>
struct customer {
    std::string fullname;
    double payment;
};
class Stack {
private:
    double all;
    int top;
    customer vec[20];
public:
    Stack() {
        for(int i = 0; i < sizeof(vec)/sizeof(customer); i ++ ) {
            vec[i].fullname = "";
            vec[i].payment = 0.0;
        }
        top = 0;
        all = 0.0;
    }
    void push(const customer& a) {
        vec[top++] = a;
        printf("push [%s] to vec\n", a.fullname.c_str());
    }
    customer pop() {
        all += vec[top - 1].payment;
        printf("pop [%s] from vec\n", vec[top - 1].fullname.c_str());
        return vec[top--];
    }
    void show() {
        printf("all: %lf\n", this->all);
        for(int i = 0; i < top; i ++ ) {
            printf("%s %lf\n", this->vec[i].fullname.c_str(), this->vec[i].payment);
        }
    }
};
int main(void) {
    printf("000000\n");
    std::shared_ptr<Stack> sta = std::make_shared<Stack>();
    printf("11111111111111111111\n");
    customer a;
    a.fullname = "a";
    a.payment = 1;
    sta->push(a);
    customer b;
    b.fullname = "b";
    b.payment = 2;
    sta->push(b);
    sta->pop();
    sta->show();
    return 0;
}