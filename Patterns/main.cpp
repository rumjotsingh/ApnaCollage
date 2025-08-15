#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printDiamond(int n)
{
    int space = n - 1;

    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << endl;
        space--;
    }

    // Repeat again in reverse order
    space = 0;

    // run loop (parent loop)
    // till number of rows
    for (int i = n; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print i stars
        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << endl;
        space++;
    }
}

int main()
{
    // Pattern 1
    //  1111
    //  2222
    //  3333
    //  4444
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    // Pattern 2
    // star pattern
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // pattern 3
    // the inverted the star
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Pattren 4
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    // Pattern 5
    char cnt = 'A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }
    // pattern 6 Hollow rectangle
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // Pattern 6 inverted and rotated the pyramid
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
    // Floyd triangle pattern
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // diamond pattern
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
    // Pattern 10;
    int N = 5;

    // Variables to store number of spaces and stars
    int spaces = 2 * N - 1;
    int stars = 0;

    // The outer loop will run for (2 * N - 1) times
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        // Upper half of the butterfly
        if (i <= N)
        {
            spaces = spaces - 2;
            stars++;
        }
        // Lower half of the butterfly
        else
        {
            spaces = spaces + 2;
            stars--;
        }
        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            if (j != N)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}