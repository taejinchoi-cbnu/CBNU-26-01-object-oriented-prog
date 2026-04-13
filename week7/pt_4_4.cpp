#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
    getline(cin, s, '&');

    string find, replace;
    cout << "find: ";
    cin >> find;
    cout << "replace: ";
    cin >> replace;

    int n = s.find(find);
    cout << n << endl;
    s.replace(n, find.length(), replace, replace.length());
    // size_t n = 0;
    // while ((n = s.find(find, n)) != string::npos)
    // {
    //     s.replace(n, find.length(), replace);
    //     n += replace.length();
    // }
    cout << s << endl;
}