
#include <iostream>
using namespace std;

int main()
{
    int *arr;

    arr = new int[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;
    arr = NULL;

    return 0;
}

