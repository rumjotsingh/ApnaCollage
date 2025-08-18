#include <bits/stdc++.h>
using namespace std;
void subArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
void subArrayWithSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                cout << "Subarray found from index " << i << " to " << j << endl;
                return;
            }
        }
    }
    cout << "No subarray found with sum " << target << endl;
}
void KadaneAlgo(int arr[], int n)
{
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    cout << "Maximum subarray sum is " << maxSoFar << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
    return 0;
}