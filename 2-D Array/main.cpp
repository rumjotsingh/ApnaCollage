#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;
        int top = 0;
        int bottom = row - 1;
        int left = 0;
        int right = col - 1;

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            for (int i = right; i >= left && top <= bottom; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top && left <= right; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
int DiagonalSum(int arr[100][100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];         // Primary diagonal
        sum += arr[i][n - i - 1]; // Secondary diagonal
    }
    if (n % 2 == 1)
    {
        sum -= arr[n / 2][n / 2];
    }
    return sum;
}
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        int mid = start + (end - start) / 2;

        while (start <= end)
        {

            int element = matrix[mid / col][mid % col];

            if (element == target)
            {
                return 1;
            }

            if (element < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return 0;
    }
};
int printSum(int arr[][3], int n, int m)
{
    int row = n;
    int col = m;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 7)
            {
                count++;
            }
        }
    }
    return count;
}
int sumOfsecondRow(int arr[][3], int n, int m)
{
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
        sum += arr[1][j];
    }
    return sum;
}
void TransposeMatrix(int arr[][3], int n, int m)
{
    int transpose[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "Transpose Matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    int arr2D[2][3] = {{4, 7, 8}, {8, 8, 7}};
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    cout << "Sum: " << sum << endl;
    cout << "Count of 7s in arr2D: " << printSum(arr2D, 2, 3) << endl;
    cout << "Count of 7s in nums: " << printSum(nums, 3, 3) << endl;
    return 0;
}