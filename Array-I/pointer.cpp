#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    // pointer to the first element
    int *ptr = arr;
    for (int i = 0; i < 100; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    // the comparison of pointer
    // the address of the first element
    cout << "Address of first element: " << &arr[0] << endl;
    cout << "Address of first element (using pointer): " << ptr << endl;
    // the addition and sub of pointer
    cout << "Address of second element (using pointer): " << ptr + 1 << endl;
    cout << "Address of third element (using pointer): " << ptr + 2 << endl;
    // the addition of pointer is not possible by the diff is possible give no of the elements
    cout << "Difference between second and first element (using pointer): " << (ptr + 1) - ptr << endl;
    return 0;
}