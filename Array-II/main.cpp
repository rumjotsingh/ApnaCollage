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
int BuyAndSellStock(int prices[], int n)
{
    int buy = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (buy > prices[i])
        {
            buy = prices[i];
        }
        maxProfit = max(maxProfit, prices[i] - buy);
    }
    return maxProfit;
}
int TrappingWater(int height[], int n)
{
    int leftMax[n];
    int rightMax[n];
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];
    }
    return waterTrapped;
}
// assign NO1
bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto el : mp)
    {
        if (el.second >= 2)
        {
            return true;
        }
    }
    return false;
}
// ASS,KIGNMNT NO2
class Solution
{
public:
    int search(vector<int> &arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            if (arr[start] <= arr[mid])
            {
                // THE B-I
                if (arr[start] <= key && key < arr[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                // BS-II
                if (arr[mid] < key && key <= arr[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
    return 0;
}