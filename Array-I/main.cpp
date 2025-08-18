#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
void reverseArrayWithSpace(int arr[], int n)
{
    int *temp = new int[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
}
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    // it is linear data structure for the storing some elements
    // multiple array of the same type
    // multiple array if the type declaration
    int mark[] = {1, 2, 3, 4, 5};
    int mark[5] = {1, 2, 3, 4, 5};
    int mark[100];
    // input
    for (int i = 0; i < 100; i++)
    {
        cin >> mark[i];
    }
    // output
    for (int i = 0; i < 100; i++)
    {
        cout << mark[i] << " ";
    }
    // largest element
    int largest = mark[0];
    for (int i = 1; i < 100; i++)
    {
        if (mark[i] > largest)
        {
            largest = mark[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    int arr[100];
    // arr = &mark; // not possible constant expression
}