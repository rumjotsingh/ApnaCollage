#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b) // pass by reference changes in the memory
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapValues(int a, int b) // passs by value doesnot change the original values
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    cout << &x;
    int *ptr = &x;     // the store of the address of x
    int **pptr = &ptr; // the pointer to pointer
    cout << "Address of x: " << ptr << endl;
    cout << "Value of x: " << *ptr << endl;
    cout << "the difference value: " << *(&x) << endl;
    cout << "x: " << x << ", y: " << y << endl;
    int *nullpointer = NULL;
    return 0;
}