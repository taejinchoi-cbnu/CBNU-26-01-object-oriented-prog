#include <iostream>
using namespace std;
#include <cmath>

class Circle
{
    int radius; // 원의 반지름 값
public:
    void setRadius(int radius); // 반지름을 설정한다.
    double getArea() const;     // 면적을 리턴한다.
};

void Circle::setRadius(int radius)
{
    this->radius = radius;
}

double Circle::getArea() const
{
    return radius * radius * M_PI;
}

int main()
{
    const int NUM = 3;
    Circle circleArray[NUM];
    for (int i = 0; i < NUM; i++)
    {
        int r;
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        circleArray[i]
            .setRadius(r);
    }

    int cnt = 0;
    for (int i = 0; i < NUM; i++)
    {
        if (circleArray[i].getArea() > 100)
            cnt++;
    }

    cout << "면적이 100보다 큰 원은 " << cnt << "개입니다." << endl;
}