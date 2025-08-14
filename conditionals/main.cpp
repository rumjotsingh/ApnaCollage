#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "enter  the age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
    int marks;
    cout << "Enter the marks" << endl;
    cin >> marks;
    if (marks >= 33)
    {
        cout << "You are pass" << endl;
    }
    else
    {
        cout << "You are fail" << endl;
    }
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    // the else if add more condtion make the if -else ladder
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is not greater than b" << endl;
    }
    if (a % 2 == 0)
    {
        cout << "a is even" << endl;
    }
    else
    {
        cout << "a is odd" << endl;
    }
}