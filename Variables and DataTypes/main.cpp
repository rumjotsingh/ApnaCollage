#include <bits/stdc++.h> //->preprocessor directive
#define Pi 3.14          //->Macros
using namespace std;
void Print()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Hello World" << endl;
    cout << "Value of Pi: " << Pi << endl;
    int a = 01;
    int b = 1; // the variables ,the name of the variables should be meaningful
    // the single = is an assignment operator
    // the == is a comparison operator
    // single line comment
    // /**
    //  */ mutile line comment
    cout << "the size of int: " << sizeof(int) << " bytes" << endl;
    cout << "the size of float: " << sizeof(float) << " bytes" << endl;
    cout << "the size of double: " << sizeof(double) << " bytes" << endl;
    cout << "the size of char: " << sizeof(char) << " bytes" << endl;
    int A;
    cin >> A; // taking the input

    int B;
    cin >> B; // taking the input
    int sum = A + B;
    int prod = A * B;
    int diff = A - B;
    int quot = A / B;
    int rem = A % B;
    cout << "The sum of A and B is: " << sum << endl;
    cout << "The product of A and B is: " << prod << endl;
    cout << "The difference of A and B is: " << diff << endl;
    cout << "The quotient of A and B is: " << quot << endl;
    cout << "The remainder of A and B is: " << rem << endl;
    Print();
    int eng, math, sci;
    cin >> eng >> math >> sci;
    float AVG = (eng + math + sci) / 3.0;
    cout << "The average is: " << AVG << endl;
    return 0;
}
