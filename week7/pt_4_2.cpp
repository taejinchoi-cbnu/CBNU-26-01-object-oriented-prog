#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> names;
    cout << "이름을 5개 입력하라" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ">> ";
        string name;
        cin >> name;
        names.push_back(name);
    }
    string last = names[0];
    for (int i = 0; i < 5; i++)
    {
        if (last < names[i])
            last = names[i];
    }

    cout << "사전에서 가장 뒤에 나오는 이름은 " << last << endl;
}