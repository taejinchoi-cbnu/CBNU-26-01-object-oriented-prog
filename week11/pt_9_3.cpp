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
    /*
    friend bool operator==(const Book& b, int p)
    friend bool operator==(const Book& b, const string& s);
    friend bool operator==(const Book& a, const Book& b);
    */
    bool operator==(int p) const
    {
        return price == p;
    }

    bool operator==(string s) const
    {
        return title == s;
    }

    bool operator==(Book b) const
    {
        return title == b.title && price == b.price && pages == b.pages;
    }
};

/*
bool operator==(const Book& b, int p)
{
    return b.price == p;
}

bool operator==(const Book& b, const string& s)
{
    return b.title == s;
}

bool operator==(const Book& a, const Book& b)
{
    return a.title == b.title &&
           a.price == b.price &&
           a.pages == b.pages;
}
*/

int main()
{
    Book a("명품 C++", 30000, 500), b("고품격 C++", 30000, 500); // price 비교
    if (a == 30000)
        cout << "정가 30000원" << endl; // 책 title 비교
    if (a == "명품 C++")
        cout << "명품 C++ 입니다." << endl; // title, price, pages 모두 비교
    if (a == b)
        cout << "두 책이 같은 책입니다." << endl;
}