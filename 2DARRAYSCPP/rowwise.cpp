#include <iostream>
using namespace std;
int rowwise(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};
    int row = 3;
    int col = 4;
    int arr[3][4];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " enter element input row " << j << " column element " << i <<endl;;
            cin >> arr[j][i];
        }
    }
    rowwise(arr, row, col);

    return 0;
}