#include <iostream>
using namespace std;
int column(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
        b
        {
            int sum = 0;
            for (int j = 0; j < row; j++)
            {
                sum = sum + arr[j][i];
            }
            cout << sum << endl;
        }
}
int main()
{
    int arr[3][4];
    cout << "enter the following elements:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "sum =  " << endl;
    column(arr, 3, 4);

    return 0;
}