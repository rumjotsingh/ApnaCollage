#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    const int N = 1000000;
    // N = 100;//not possible
    ll arr[N];
    cout << 10 / 3.0;
    cout << 'a' + 1;
    cout << (int)('a' + 1);
    int a = 5, b = 10;
    cout << a + b << endl;    // addition
    cout << a - b << endl;    // subtraction
    cout << a * b << endl;    // multiplication
    cout << a / b << endl;    // division
    cout << a % b << endl;    // modulus
    cout << a++ << endl;      // post increment
    cout << ++a << endl;      // pre increment
    cout << a-- << endl;      // post decrement
    cout << --a << endl;      // pre decrement
    cout << (a > b) << endl;  // greater than
    cout << (a < b) << endl;  // less than
    cout << (a == b) << endl; // equal to
    cout << (a != b) << endl; // not equal to
    if (a < b && a < 5)
    {
        cout << "Both conditions are true" << endl;
    }
    //&& and
    if (a < b || a < 5)
    {
        cout << "At least one condition is true" << endl;
    }
}