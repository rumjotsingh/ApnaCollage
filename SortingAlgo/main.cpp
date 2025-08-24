#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return vector<int>(arr, arr + n);
}
vector<int> SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return vector<int>(arr, arr + n);
}
vector<int> InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return vector<int>(arr, arr + n);
}
vector<int> CountingSort(int arr[], int n)
{
    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);
    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);
    for (int i = 0; i < n; i++)
    {
        count[arr[i] - minVal]++;
    }
    for (int i = 1; i < range; i++)
    {
        count[i] += count[i - 1];
    }
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }
    return output;
}
int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> sortedArray = CountingSort(arr, n);
    for (int i : sortedArray)
    {
        cout << i << " ";
    }
    return 0;
}