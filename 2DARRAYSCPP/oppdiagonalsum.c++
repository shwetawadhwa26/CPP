
#include <iostream>
using namespace std;

void oppositeDiagonalSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][col - 1 - i];
    }
    cout << "Sum of opposite diagonal: " << sum << endl;
}

int main()
{
    int arr[3][4];

    cout << "Enter the following elements:";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    oppositeDiagonalSum(arr, 3, 4);

    return 0;
}
