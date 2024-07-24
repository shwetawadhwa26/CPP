#include <iostream>
using namespace std;
int maximum(int arr[][4], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int row = 3;

    int col = 4;
    int arr[3][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int result = maximum(arr, row, col);
    cout << "maximum element in array = " << result;

    return 0;
}