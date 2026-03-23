#include <iostream>
using namespace std;

double biggest(double *, int);

int main(void)
{
    double a[5];
    cout << "5개의 실수를 입력하라>>";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "제일 큰 수 = " << biggest(a, 5) << endl;

    return 0;
}

double biggest(double *a, int b)
{
    double max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}