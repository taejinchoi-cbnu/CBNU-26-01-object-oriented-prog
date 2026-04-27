#include <iostream>
using namespace std;
class Int
{
    // 여기에 Int 클래스 멤버 선언
private:
    int value;

public:
    Int(int a = 0);
    ~Int();
    void set(int);
    int get() const;
};

Int::Int(int a) : value(a) {}

Int::~Int() {}

// parameter로 value 받을꺼면 헷갈리니까 this->value로 해줘야함
void Int::set(int b)
{
    value = b;
}

int Int::get() const
{
    return value;
}

// 여기에 Int 클래스 멤버함수 정의
int main()
{
    Int i1 = 20; // Int i1(20);과 동일
    const Int i2 = i1;
    i1.set(10);
    cout << i1.get() << ", " << i2.get() << endl;
}