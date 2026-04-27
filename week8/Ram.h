#include <iostream>
using namespace std;
#pragma once

const int MEM_SIZE = 100 * 1024;
const char *ERROR_MSG = "주소 범위 벗어남";

class Ram
{
    char mem[MEM_SIZE];
    int size;

public:
    Ram();  // mem의 모든 값을 0으로 초기화하고 size를 MEM_SIZE로 초기화
    ~Ram(); // "메모리 제거됨" 문자열 출력
    // read와 write 멤버 함수 모두 addr이 주소의 범위를 넘으면
    // "주소 범위를 벚어남"이라는 에러 메시지 출력
    // read 함수의 경우 주소 범위를 벚어날 경우 -1 리턴
    char read(int addr);              // addr 주소의 메모리를 읽어 리턴
    void write(int addr, char value); // addr 주소에 value 저장
private:
    bool isValidAddr(int addr);
};

// size = MEM_SIZE도 가능
Ram::Ram() : size(MEM_SIZE)
{
    for (int i = 0; i < MEM_SIZE; i++)
        mem[i] = 0;
}

Ram::~Ram()
{
    cout << "메모리 제거됨" << endl;
}

bool Ram::isValidAddr(int addr)
{
    return 0 <= addr && addr < MEM_SIZE;
}

char Ram::read(int addr)
{
    if (isValidAddr(addr))
        return mem[addr];
    // else 빼도 됨
    cerr << ERROR_MSG << endl;
    return -1;
}

void Ram::write(int addr, char value)
{
    if (isValidAddr(addr))
        mem[addr] = value;
    // 여기도 else 안써도됨
    cerr << ERROR_MSG << endl;
}