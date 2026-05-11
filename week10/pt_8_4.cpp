#include <iostream>
#include <cstring>

class Book
{
    char *title; // 제목 문자열
    int price;   // 가격
public:
    // 여기에는 복사 생성자의 선언이 없음(복사 생성자도 선언해야 함)
    Book(const char *title, int price);
    ~Book();
    Book(const Book &book);
    void set(const char *title, int price);
    void show() const { std::cout << title << ' ' << price << "원" << std::endl; }
};

Book::Book(const char *title, int price)
{
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
    this->price = price;
}

Book::Book(const Book &book)
{
    this->price = book.price;
    int len = strlen(book.title);    // title의 문자 개수
    this->title = new char[len + 1]; // title을 위한 공간 핟당
    strcpy(this->title, book.title); // title의 문자열 복사
}

Book::~Book()
{
    if (title)
        delete[] title;
}

void Book::set(const char *title, int price)
{
    delete[] this->title;
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
    this->price = price;
}

int main()
{
    Book cpp("C++", 10000);
    Book java = cpp;
    cpp.show();
    java.show();
    java.set("Java", 12000);
    cpp.show();
    java.show();
}