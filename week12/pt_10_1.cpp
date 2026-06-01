#include <iostream>
#include <string>
using namespace std;
class Circle
{
    int radius;

public:
    Circle(int radius = 1) : radius(radius) {}
    void setRadius(int radius) { this->radius = radius; }
    int getRadius() const { return radius; }
    double getArea() const { return 3.14 * radius * radius; }
};

// 여기에 NamedCircle 구현

class NamedCircle : public Circle
{
    string name;

public:
    NamedCircle(string n, int radius = 1) : Circle(radius) { name = n; } // const char *name으로 string 받아도됨
    void show()
    {
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
    string getName() const { return name; }
};

int main()
{
    NamedCircle waffle("waffle", 3);
    waffle.show();
    cout << waffle.getName() << "의 넓이는 " << waffle.getArea() << endl;
}