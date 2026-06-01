#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book
{
    std::string title;
    int price;
    int pages;

public:
    Book(const std::string & = std::string(), int = 0, int = 0);
    const std::string &getTitle() const;

    bool operator!() const { return price == 0; }

    Book &operator++()
    {
        price = static_cast<int>(price * 1.1);
        return *this;
    }

    Book operator++(int)
    {
        Book temp = *this;
        price = static_cast<int>(price * 1.1);
        return temp;
    }

    friend std::ostream &operator<<(std::ostream &os, const Book &b);
};

#endif