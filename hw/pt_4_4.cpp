#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;

    getline(cin, s, '&');

    cin.ignore();

    string find, replace;
    cout << "find: ";
    getline(cin, find);
    cout << "replace: ";
    getline(cin, replace);

    size_t startIndex = 0;
    while ((startIndex = s.find(find, startIndex)) != string::npos)
    {
        s.replace(startIndex, find.length(), replace);
        startIndex += replace.length();
    }

    cout << s << endl;
}