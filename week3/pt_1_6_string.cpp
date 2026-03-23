#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name, address;
    int age;

    cout << "이름은? ";
    getline(cin, name);

    cout << "주소는? ";
    getline(cin, address);

    cout << "나이는? ";
    cin >> age;

    cout << "----------------------" << endl;
    cout << name << ". " << address << ". " << age << "세" << endl;
    return 0;
}