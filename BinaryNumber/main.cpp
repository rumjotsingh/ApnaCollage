#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        ans += (n[i] - '0') * x;
        x *= 2;
    }
    return ans;
}
string DecimalToBinary(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans += (n % 2) + '0';
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int bintodec(int n)
{
    int org = n;
    int pow = 1;
    int ans = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        ans += last_digit * pow;
        pow *= 2;
        n /= 10;
    }
    return ans;
}
int decitobin(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int last_digit = n % 2;
        ans += last_digit * pow;
        pow *= 10;
        n /= 2;
    }
    return ans;
}
int main()
{
    string n;
    cin >> n;
    cout << binaryToDecimal(n);
    int decimal;
    cin >> decimal;
    cout << DecimalToBinary(decimal);
}