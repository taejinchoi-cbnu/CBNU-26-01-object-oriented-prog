#include <iostream>
#include "Family.h"
#include "Person.h"

//  : name(name), size(size)로 초기화도 가능함
Family::Family(const std::string &name, int size)
{
    this->name = name;
    this->size = size;
    this->p = new Person[size];
};
Family::~Family() { delete[] p; };

void Family::setName(int index, const std::string &name)
{
    if (index >= 0 && index < size)
        p[index].setName(name);
};

void Family::show() const
{
    std::cout << name << " 가족은 다음과 같이 " << size << "명 입니다." << "\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << p[i].getName();
        if (i < size - 1)
            std::cout << ", ";
    }
    std::cout << "\n";
}