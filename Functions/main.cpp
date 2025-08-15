#include <bits/stdc++.h>
using namespace std;
void sayHello()
{
    cout << "Hello World!";
}
int sum(int a, int b) // parameters -> the variables listed in a function's definition
{
    return a + b;
}
int diff(int a, int b = 10) // the default argument which are left to right
{
    return a - b;
}
int prod(int a, int b)
{
    return a * b;
}
bool ODDOREVEN(int n)
{
    return n % 2 == 0;
}
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int factiterative(int n)
{
    int fact = 1; // Local memory
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int NCR(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int sum(int a, float b)
{
    return a + b;
}

int main()
{

    sayHello();
    int a = 10; // Global
    int ln;
    cin >> ln;
    int ur;
    cin >> ur;
    for (int i = ln; i <= ur; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << sum(5, 10); // Arguments -> the values which are passed to the function
}