#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // alternate 0 and 1 pattern
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
    }
    // Rhombus pattern
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < 4 - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // pattern 3 palindromic numbers
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
