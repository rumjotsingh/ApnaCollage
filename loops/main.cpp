#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    { // initialization condition updation
        cout << i << endl;
    }
    // print the n natural numbers
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << endl;
    }
    // the sum of natural numbers
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    // print pana collage 5 times
    for (int i = 0; i < 5; i++)
    {
        cout << "apna Collage" << endl;
    }
    // Assignemnst question
    // 1 factorial
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact *= (i + 1);
    }
    cout << "The factorial of " << n << " is: " << fact << endl;
    // 2 the table of the user
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    // 3 armstrong
    for (int i = 0; i < n; i++)
    {
        int num = i;
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if (sum == i)
        {
            cout << i << " is an Armstrong number." << endl;
        }
    }
    // 4 print 2 to n all prime
    for (int i = 0; i < n; i++)
    {
        int num = i + 2;
        bool isPrime = true;
        if (num < 2)
            isPrime = false;
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " is a prime number." << endl;
        }
    }
    // 5 fibonacci
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    // while loop
    bool condition = true; // initialization
    while (condition)
    {
        // code to be executed
    }
    // print the sqaurepattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // n to 1
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    // the sum of the digits
    int sumOfDigits = 0;
    while (n > 0)
    {
        int l = n % 10;
        sumOfDigits += l;
        n /= 10;
    }
    int sumOfDigitsOdd = 0;
    while (n > 0)
    {
        int l = n % 10;
        if (l % 2 != 0)
        {
            sumOfDigitsOdd += l;
        }

        n /= 10;
    }
    cout << "The sum of the digits is: " << sumOfDigits << endl;
    cout << "The sum of the odd digits is: " << sumOfDigitsOdd << endl;
    // print the dihjts in the reevesr order
    int sumOfDigits = 0;
    while (n > 0)
    {
        int l = n % 10;
        cout << l;
        n /= 10;
    }
    // the reverrse the number
    int rev = 1;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "The reverse of the number is: " << rev << endl;

    // do while it is pretest loop
    do
    {
        cout << "Hello World" << endl;
    } while (condition);
    // break; // this is will break come out of the loop
    // continue; // this will skip the current iteration
    // wap to user  eneter a number a till its is mutilple of 10
    while (true)
    {
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if (a % 10 == 0)
        {
            break;
        }
    }
    // wap to check the user multiple of 10
    while (true)
    {
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if (a % 10 == 0)
        {
            continue;
        }
    }
    // wap to check the prime
    bool flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is not a prime number" << endl;
    }
}