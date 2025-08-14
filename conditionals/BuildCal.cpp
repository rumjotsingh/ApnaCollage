#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the Two Numbers: ";
    cin >> a >> b;
    char op;
    cout << "Enter the operator + - * /";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result: " << a + b << endl;
        break;
    case '-':
        cout << "Result: " << a - b << endl;
        break;
    case '*':
        cout << "Result: " << a * b << endl;
        break;
    case '/':
        if (b != 0)
        {
            cout << "Result: " << a / b << endl;
        }
        else
        {
            cout << "Division by zero error!" << endl;
        }
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}