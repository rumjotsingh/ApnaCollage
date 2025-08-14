#include <bits/stdc++.h>
using namespace std;
int main()
{
    float erase, pencil, pen, gst;
    cout << "Enter the price of eraser: ";
    cin >> erase;
    cout << "Enter the price of pencil: ";
    cin >> pencil;
    cout << "Enter the price of pen: ";
    cin >> pen;
    cout << "Enter the GST percentage: ";
    cin >> gst;
    float total = erase + pencil + pen + (erase + pencil + pen) * gst / 100;
    cout << "The total price including GST is: " << total << endl;
    return 0;
}