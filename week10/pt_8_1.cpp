#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    double getArea() const { return 3.14 * radius * radius; }
};

// c++ 제공 기본 swap이 있는데 overriding 되어서 이 swap이 작동함
void swap(Circle &A, Circle &B)
{
    Circle temp = A;
    A = B;
    B = temp;
}

int main()
{
    Circle A;
    Circle B(3);
    cout << "A의 면적 = " << A.getArea() << ", " << "B의 면적 = " << B.getArea() << endl;
    swap(A, B); // swap 함수 구현
    cout << "A의 면적 = " << A.getArea() << ", " << "B의 면적 = " << B.getArea() << endl;
}