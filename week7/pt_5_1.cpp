#include <iostream>
using namespace std;

class Rectangle
{

public:
    int width = 1;
    int height = 1;
    // Rectangle(int x = 3, int y = 3);
    Rectangle();
    Rectangle(int x);
    Rectangle(int x, int y);
    /* 초기화 리스트 => Rectangle(int x, int y): width(x), height(y){}
    강의 노트 초기화 해도 되는데 이게 더 중요한? 강의 노트에는 없는데 수업에서 알려주심

    왜 사용?)
    const로 변수가 선언되면 지금 각주 안된 부분들은 전부 오류가 뜸
    래퍼런스 변수를 쓸 때에도 필요함
    성능상의 이점도 있음

    초기화 리스트 시험에 나옴요 */
    bool isSquare();
    ~Rectangle();
};

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int x)
{
    width = x;
    height = x;
}

Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}

Rectangle::~Rectangle()
{
}

bool Rectangle::isSquare()
{
    return width == height;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
    if (rect1.isSquare())
        cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare())
        cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare())
        cout << "rect3는 정사각형이다." << endl;
}