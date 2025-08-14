#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "a is greater" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "b is greater" << endl;
    }
    else if (c > a && c > b)
    {
        cout << "c is greater" << endl;
    }
    else
    {
        cout << "All are equal" << endl;
    }
}