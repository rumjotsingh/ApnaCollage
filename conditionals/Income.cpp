#include <bits/stdc++.h>
using namespace std;
int main()
{
    int income;
    cout << "Enter your income: ";
    cin >> income;

    if (income < 250000)
    {
        cout << "You are not liable to pay tax." << endl;
    }
    else if (income >= 250000 && income < 500000)
    {
        cout << "You are in the 5% tax bracket." << income * 0.05 << endl;
    }
    else if (income >= 500000 && income < 1000000)
    {
        cout << "You are in the 20% tax bracket." << income * 0.2 << endl;
    }
    else
    {
        cout << "You are in the 30% tax bracket." << income * 0.3 << endl;
    }

    return 0;
}