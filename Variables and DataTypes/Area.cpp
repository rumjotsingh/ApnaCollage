#include <bits/stdc++.h>
using namespace std;
int main()
{
    int side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    float area = side * side;
    cout << "The area of the square is: " << area << endl;

    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}