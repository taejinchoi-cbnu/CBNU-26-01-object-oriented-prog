#include <iostream>
#include "BOOK_H.h"
using namespace std;

int main()
{
    Book book1("벼룩시장", 0, 50), book2("C++", 10000, 1000);
    // 가격은 0
    if (!book1)
        cout << "공짜다" << endl;
    // 연산자 오버로딩 할 때 return type 조심하기 전위/후위
    cout << ++book2 << endl;
    cout << book2++ << endl;
    cout << book2 << endl;
}