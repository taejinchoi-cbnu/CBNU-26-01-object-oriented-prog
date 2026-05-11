#include <iostream>
using namespace std;

class Color
{
    int red, green, blue;

public:
    Color() { red = green = blue = 0; }
    Color(int r, int g, int b) { setColor(r, g, b); }
    void setColor(int r, int g, int b)
    {
        red = r;
        green = g;
        blue = b;
    }
    void show() const { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
    Color screenColor(255, 0, 0); // 빨간색의screenColor 객체생성
    Color *p;                     // Color 타입의포인터변수p 선언
    p = &screenColor;             // (1) p가screenColor의주소를가지도록코드작성
    p->show();                    // (2) p와show()를이용하여screenColor 색출력
    Color colors[3];              // (3) Color의일차원배열colors 선언. 원소는3개
    p = colors;                   // (4) p가colors 배열을가리키도록코드작성

    // (5) p와setColor()를이용하여colors[0], colors[1], colors[2]가
    // 각각빨강, 초록, 파랑색을가지도록코드작성

    p->setColor(255, 0, 0);
    (p + 1)->setColor(0, 255, 0);
    (p + 2)->setColor(0, 0, 255);

    for (int i = 0; i < 3; i++)
        (p + i)->show();
}