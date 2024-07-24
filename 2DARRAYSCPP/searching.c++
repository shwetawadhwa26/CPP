#include <iostream>
using namespace std;

bool findtarget(int arr[3][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];
    cout << "enter your elements : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "eneter your target : ";
    int target;
    cin >> target;

    findtarget(arr, row, col, target);
    if (findtarget)
    {
        cout << "Target found" << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }

    return 0;
}