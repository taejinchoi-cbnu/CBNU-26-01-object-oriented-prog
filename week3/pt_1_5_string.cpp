#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string password1, password2;
    cout << "새 암호를 입력하세요 >>";
    getline(cin, password1);
    cout << "새 암호를 다시 한번 입력하세요 >>";
    getline(cin, password2);

    if (password1 == password2)
    {
        cout << "같습니다" << endl;
    }
    else
    {
        cout << "같지 않습니다." << endl;
    }

    return 0;
}