#include "Person.h"
#pragma once

class Family
{
    std::string name;
    Person *p; // Person 배열 포인터
    int size;  // Person 배열의 크기. 가족 구성원 수
public:
    Family(const std::string &name, int size); // size 개수만큼 Person 배열 동적 생성
    ~Family();                                 // 동적 배열 메모리 해제
    // p가 가리키는 동적배열의index위치의Person 객체의이름을변경
    void setName(int index, const std::string &name);
    void show() const; // 모든 가족 구성원 출력
};
