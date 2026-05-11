#include <iostream>
#include "cal.h" // 여기서도 cal.h를 포함!

void otherFunction() {
    Adder anotherAdder(5, 5);
    std::cout << "other에서 계산: " << anotherAdder.process() << std::endl;
}
