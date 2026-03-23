#include <iostream>
using namespace std;

bool bigger(int x, int y, int &big)
{
    if (x == y)
    {
        return 1;
    }

    else
    {
        if (x > y)
        {
            big = x;
            return 0;
        }

        else
        {
            big = y;
            return 0;
        }
    }
}

int main(void)
{
    int x, y, big;
    bool b;
    cout << "두 정수를 입력하세요>> ";
    cin >> x >> y;
    b = bigger(x, y, big);
    if (b)
        cout << "same" << endl;
    else
        cout << "큰 수는 " << big << endl;
    return 0;
}