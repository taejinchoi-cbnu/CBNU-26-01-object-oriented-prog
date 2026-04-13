#include <iostream>
using namespace std;

// 문제
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

// 수업시간에 max = 100을 생각하지 않고 그냥 가장 큰 수 return
int big_lecture(int a, int b)
{
    int res = a;
    res > b ? res = a : res = b;

    return res;
}

int big_lecture(int a, int b, int c = 0)
{
    int res = a;
    if (b > res)
        res = b;
    if (c > res)
        res = c;

    return res;
}

int main(void)
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);

    cout << x << ' ' << y << ' ' << z << endl;
}