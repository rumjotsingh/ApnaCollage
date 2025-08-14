#include <bits/stdc++.h>
using namespace std;
void Tell()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "Positive";
    }
    else if (a < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
}
bool leapYear()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}
bool ArmStrong()
{
    int num;
    cin >> num;
    int sum = 0, temp = num, digit;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}
int main()
{
    Tell();
    if (leapYear())
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
}