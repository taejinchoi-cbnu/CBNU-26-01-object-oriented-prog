#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char password1[100], password2[100];
    cout << "새 암호를 입력하세요 >>";
    cin.getline(password1, 100);
    cout << "새 암호를 다시 한번 입력하세요 >>";
    cin.getline(password2, 100);

    if (strcmp(password1, password2) == 0)
    {
        cout << "같습니다" << endl;
    }
    else
    {
        cout << "같지 않습니다." << endl;
    }

    return 0;
}