#include <iostream>
using namespace std;

int big(int a, int b)
{
    int res = 0;
    int max = 100;
    if (a > b)
        a < max ? res = a : res = max;
    else
        b < max ? res = b : res = max;

    return res;
}

int big(int a, int b, int max) // (2) max = 100을 입력해주고 위에 big함수 삭제하면 됨
{
    int res = 0;
    if (a > b)
        a < max ? res = a : res = max;
    else
        b < max ? res = b : res = max;

    return res;
}

int main(void)
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);

    cout << x << ' ' << y << ' ' << z << endl;
}