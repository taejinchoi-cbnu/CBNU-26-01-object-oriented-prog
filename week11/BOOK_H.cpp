#include "BOOK_H.h"

Book::Book(const std::string &title, int price, int pages)
    : title(title), price(price), pages(pages)
{
}

const std::string &Book::getTitle() const
{
    return title;
}

std::ostream &operator<<(std::ostream &os, const Book &b)
{
    os << b.title << ' '
       << b.price << "원 "
       << b.pages << "페이지";

    return os;
}