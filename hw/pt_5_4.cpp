#include <iostream>
#include "cal.h" // cal.h를 포함

void otherFunction(); // other.cpp에 있는 함수를 쓰겠다고 선언

int main()
{
    Adder myAdder(10, 20);
    std::cout << "main에서 계산: " << myAdder.process() << std::endl;

    otherFunction(); // other.cpp의 함수 호출

    return 0;
}