#include <iostream>
using namespace std;

int main(void)
{
    int M[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int (*ptr)[3];
    int *p;
    int **pt;

    ptr = M;
    cout << ptr << M;
    cout << ptr + 1 << M + 1;
    cout << *(ptr + 1) << ptr[1] << *(M + 1) << M[1];
    cout << **(ptr + 1) << **(M + 1) << *M[1] << M[1][0];

    p = M[0];
    cout << p << M[0] << *M;
    cout << p + 1 << M[0] + 1 << *M + 1;
    cout << *(p + 1) << *(M[0] + 1) << *(*M + 1);

    pt = &p;
    cout << *pt << p;
    cout << **pt << *p;
    return 0;
}