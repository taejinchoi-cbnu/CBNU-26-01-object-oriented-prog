#include <iostream>
using namespace std;

class Book
{
    string title;
    int price;
    int pages;

public:
    Book(const string &title = string(), int price = 0, int pages = 0)
    {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() const { cout << title << ' ' << price << "원 " << pages << " 페이지" << endl; }
    const string &getTitle() const { return title; }

    // 외부 함수는 friend로 class 내부에서 선언하고 class 바깥에 operator를 빼면 된다.
    // friend Book& operator+=(Book& b, int p);
    // friend Book& operator-=(Book& b, int p);
    Book &operator+=(int p) // param으로 Book &book도 받아야함
    {
        price += p;   // book.price로 변경해야함
        return *this; // friend에서는 book 자체를 return해주면됨
    }

    Book &operator-=(int p)
    {
        price -= p;
        return *this;
    }
};

int main()
{
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show();
    b.show();
}