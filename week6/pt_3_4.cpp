#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], size_t len)
{
    size_t j = len - 1;
    for (int i = 0; i < j; i++)
    {
        swap(arr[i], arr[j]);
        j--;
    }
}

int main()
{
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++)
        cout << x[i] << ' ';
    cout << endl;
}