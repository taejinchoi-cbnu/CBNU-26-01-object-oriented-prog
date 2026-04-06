#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> names(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "이름 >> ";
        getline(cin, names[i]);
    }

    string max = names[0];

    for (int i = 0; i < 5; i++)
    {
        if (names[i][0] > max[0])
            max = names[i];
    }

    cout << max << endl;
}