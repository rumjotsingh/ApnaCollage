#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int original = n;
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int f1(int a, int b)
{
    return a * 2 + b * 2 + 2 * a * b;
}
int largest(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    return c;
}
char f2(char c)
{
    if (c == 'z')
    {
        return 'a';
    }
    return (c + 1);
}
int main()
{
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (isPalindrome(num))
    //     cout << num << " is a palindrome.";
    // else
    //     cout << num << " is not a palindrome.";

    char ch;
    cin >> ch;
    cout << "Next character: " << f2(ch);
}
