
#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    int *ptr;
    ptr = &num;

    cout << "Value of variable: " << num << endl;
    cout << "Address of variable: " << &num << endl;

    cout << "Value stored in pointer: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}

