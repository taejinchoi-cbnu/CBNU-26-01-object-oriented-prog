#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int len)
{
    int j = len - 1;
    for (int i = 0; i < j; i++)
    {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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