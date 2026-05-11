#pragma once

#include <string>

class Person
{
    std::string name;

public:
    Person() { name = ""; }
    Person(const std::string &name) { this->name = name; }
    const std::string &getName() const { return name; }
    void setName(const std::string &name) { this->name = name; }
};